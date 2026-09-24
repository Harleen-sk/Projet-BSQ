/*
** EPITECH PROJECT, 2022
** double tableau
** File description:
** double tableau
*/

#include "my.h"
#include <stdlib.h>

void free_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        free(tab[i]);
    }
    free(tab);
}

char **double_array(char const *filepath, bsq_t *bs)
{
    int my_row = 0; int my_col = 0; int s = 0;
    my_col = cols(filepath);
    my_row = row(filepath);
    char **tab = malloc(sizeof(char*) * (my_row + 1));
    tab[my_row] = NULL;

    while (bs->buffer[s] != '.' && bs->buffer[s] != 'o') {
        s++;
    }
    for (int k = 0; k < my_row; k++) {
        tab[k] = malloc (sizeof(char) * (my_col + 1));
    }
    for (int i = 0; i < my_row; i++) {
        for (int j = 0; j <= my_col; j++) {
            tab[i][j] = bs->buffer[s];
            s++;
        }
        tab[i][my_col] = '\0';
    }
    return (tab);
}
