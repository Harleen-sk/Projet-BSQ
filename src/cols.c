/*
** EPITECH PROJECT, 2022
** ligne
** File description:
** row ligne
*/

#include "my.h"

int cols(char const *filepath)
{
    struct stat st;
    stat(filepath, &st);

    int i = 0; int count = 0;
    int size = st.st_size;
    char buf[size];
    int fd = open(filepath, O_RDONLY);
    read(fd, buf, size);

    while (buf[i] != '\n'){
        i++;
    }
    i++;
    while (buf[i] != '\n') {
        count = count + 1;
        i++;
    }
    close(fd);
    return (count);
}
