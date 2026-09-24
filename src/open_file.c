/*
** EPITECH PROJECT, 2023
** open file
** File description:
** open file
*/

#include "my.h"
#include <stdio.h>

char *open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat st;
    stat(filepath, &st);
    char *buffer = malloc (sizeof(char) * (st.st_size));
    read(fd, buffer, st.st_size);
    close(fd);
    return buffer;
}

int check_backslash(char *buffer)
{
    int counter = 0;

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n') {
            counter++;
        }
    }
    return counter - 1;
}

int error(char const *filepath)
{
    struct stat st;
    stat(filepath, &st);
    int fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return 84;
    char buffer[st.st_size];
    int size = read(fd, &buffer, st.st_size);
    int len = my_getnbr(buffer);
    if (size < 1)
        return 84;
    for (int i = 0; buffer[i] != '\n'; i++)
        if (buffer[i] < '0' || buffer[i] > '9')
            return 84;
    if (check_backslash(buffer) != len)
        return 84;
    return 0;
}
