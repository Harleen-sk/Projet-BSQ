/*
** EPITECH PROJECT, 2022
** nbr colonne
** File description:
** nbr cols
*/

#include "my.h"

int row(char const *filepath)
{
    struct stat st;
    stat(filepath, &st);

    int i = 0; int count = 0;
    int size = st.st_size;
    char buf[size];
    int fd = open(filepath, O_RDONLY);
    int file = read(fd, buf, size);
    buf[file] = '\0';
    while (buf[i] != '\0') {
        if (buf[i] == '\n') {
            count = count + 1;
        }
        i++;
    }
    close(fd);
    return (count - 1);
}
