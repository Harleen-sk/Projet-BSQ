/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <unistd.h>
    #include <dirent.h>
    #include <stdio.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdlib.h>

typedef struct bsq_s {
    int size;
    int fd;
    int file;
    int res;
    int j_max;
    int i_max;
    int max;
    int i;
    int j;
    int i_pos;
    char *buffer;
} bsq_t;

void my_putchar(char c);
int cols(char const *filepath);
int row(char const *filepath);
char** double_array(char const *filepath, bsq_t *bs);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int algo(int **stock, int i, int j);
bsq_t *position(int **stock, bsq_t *bs, char const *filepath, int *max);
void display(int **stock, int *pointeur, int i, int my_col);
void display_maps(char **stock, int i, int j, int **tab);
bsq_t *maximum(int **stock, bsq_t *bs, int j, int *max);
int coordonne(char const *filepath, char **tab, bsq_t *bs, int *max);
int **int_array(char const *filepath, bsq_t *bs);
void free_tab(char **tab);
int my_map_error(bsq_t *bs);
char *open_file(char const *filepath);
int error(char const *filepath);
int my_getnbr(char const *string);

#endif
