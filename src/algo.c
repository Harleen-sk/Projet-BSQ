/*
** EPITECH PROJECT, 2022
** algo mineur inverse
** File description:
** mineur inverse
*/

#include "my.h"

int algo(int **stock, int i, int j)
{
    int hight = stock[i - 1][j];
    int minimum = hight;
    int hight_left = stock[i - 1][j - 1];
    int left = stock[i][j - 1];
    int tab[3] = {hight, hight_left, left};

    for (int i = 0; i < 3; i++) {
            if (minimum > tab[i])
                minimum = tab[i];
    }
    minimum = minimum + 1;
    return minimum;
}
