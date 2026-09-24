/*
** EPITECH PROJECT, 2023
** main bsq
** File description:
** main bsq
*/

#include "my.h"

void call(int **stock, int *pointeur, char const *filepath)
{
    int my_col = cols(filepath);
    int my_row = row(filepath);

    for (int i = 0; i < my_row; i++) {
        display(stock, pointeur, i, my_col);
    }
}

int my_bsq(char const *filepath, int max, bsq_t bs)
{
    char **tab = double_array(filepath, &bs);

    if (tab == NULL)
        return 84;
    coordonne(filepath, tab, &bs, &max);
    free_tab(tab);
    return 0;
}

int main(int ac, char **av)
{
    bsq_t bs;
    if (error(av[1]) == 84) {
        return 84;
        }
    bs.buffer = open_file(av[1]);
    int pointeur = 0;
    int max = 0;
    if (ac < 2 || ac >= 3)
        return 84;
    if (ac == 2 && open(av[1], O_RDONLY) == -1)
        return 84;
    int **stock = int_array(av[1], &bs);
    if (stock == NULL || bs.buffer == NULL)
        return 84;
    call(stock, &pointeur, av[1]);
    bs.i_pos = 0;
    bs.i_max = 0;
    position(stock, &bs, av[1], &max);
    return my_bsq(av[1], max, bs);
    return 0;
}
