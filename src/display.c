/*
** EPITECH PROJECT, 2022
** display
** File description:
** display
*/

#include "my.h"

void display(int **stock, int *pointeur, int i, int my_col)
{
    for (int j = 0; j < my_col; j++) {
        pointeur = &stock[i][j];
        if (i > 0 && (j > 0) && stock[i][j] != 0) {
            *pointeur = algo(stock, i, j);
        }
    }
}

void display_maps(char **stock, int i, int j, int **tab)
{
    if (stock[i][j] == 'o')
        tab[i][j] = 0;
    else if (stock[i][j] == '.')
        tab[i][j] = 1;
}
