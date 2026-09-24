/*
** EPITECH PROJECT, 2022
** char** to int**
** File description:
** char** to int**
*/

#include "my.h"

int **int_array(char const *filepath, bsq_t *bs)
{
    char **stock = double_array(filepath, bs);
    int my_col = cols(filepath);
    int my_row = row(filepath);
    int **tab = malloc (sizeof(int*) * (my_row + 1));
    tab[my_row] = NULL;

    if (stock == NULL)
        return NULL;

    for (int i = 0; i < my_row; i++) {
        tab[i] = malloc (sizeof(int) * (my_col + 2));
        for (int j = 0; j < my_col; j++) {
            display_maps(stock, i, j, tab);
        }
    }
    return (tab);
}
