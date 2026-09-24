/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** task05
*/

#include "my.h"

int my_getnbr(char const *string)
{
    int i = 0;
    int min = -1;
    int stock = 0;
    int stop = 0;

    while (string[i] != '\0' && stop == 0) {
        if (string[i] == 45) {
            stock = stock * 10 + (string[i + 1] - '0');
            stock = stock * min;
            return stock;
        }
        if (string[i] >= '0' && string[i] <= '9') {
            stock = stock * 10 + (string[i] - '0');
        }
        if (string[i] < '0' || string[i] > '9') {
            stop = 1;
        }
        i++;
    }
    return (stock);
}
