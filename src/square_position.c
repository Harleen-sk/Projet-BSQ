/*
** EPITECH PROJECT, 2022
** square position
** File description:
** position
*/

#include "my.h"

bsq_t *maximum(int **stock, bsq_t *bs, int j, int *max)
{
    if ((*max) < stock[bs->i_pos][j] &&
        stock[bs->i_pos][j] != 0) {
        (*max) = stock[bs->i_pos][j];
            bs->i_max = bs->i_pos;
            bs->j_max = j;
    }
    return bs;
}

bsq_t *position(int **stock, bsq_t *bs, char const *filepath, int *max)
{
    int my_col = cols(filepath);
    int my_row = row(filepath);
    for (bs->i_pos = 0; bs->i_pos < my_row; bs->i_pos = bs->i_pos + 1) {
        for (int j = 0; j < my_col; j++) {
            maximum(stock, bs, j, max);
        }
    }
    return bs;
}

void display_x(char **tab, int i, int j, char *p)
{
    if (tab[i][j] == '.') {
        *p = 'x';
    }
}

int coordonne(char const *filepath, char **tab, bsq_t *bs, int *max)
{
    int my_col = cols(filepath);
    int my_row = row(filepath);
    char *p;
    for (int i = bs->i_max; i > bs->i_max - *max; i--) {
        for (int j = bs->j_max; j > bs->j_max - *max; j--) {
            p = &tab[i][j];
            display_x(tab, i, j, p);
        }
    }
    for (int i = 0; i < my_row; i++){
        for (int j = 0; j < my_col; j++){
            my_putchar(tab[i][j]);
        }
        my_putchar('\n');
    }
    return 0;
}
