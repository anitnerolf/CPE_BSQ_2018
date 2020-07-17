/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** BSQ
*/

#include "my.h"

double_t	*double_string(char *buffer, char *filepath)
{
    double_t	*d;

    d = malloc(sizeof(double_t) * 2);
    d->i = 0;
    d->j = 0;
    d->k = 0;
    d->size = file_size(filepath);
    d->nb_rows = number_of_lines(buffer);
    d->nb_cols = number_of_cols(buffer, filepath);
    d->arr = allocate_memory(d->nb_rows, d->nb_cols);
    d->str = malloc(sizeof(char) * 2);
    return (d);
}

print_t	*print(char *buffer, char *filepath)
{
    print_t	*d;
    d = malloc(sizeof(print_t));
    d->max_i = 0;
    d->max_j = 0;
    d->nb_rows = number_of_lines(buffer);
    d->nb_cols = number_of_cols(buffer, filepath);
    d->sq = memory_alloc(d->nb_rows, d->nb_cols);
    d->s = allocate_memory(d->nb_rows, d->nb_cols);
    d->max_s = d->sq[0][0];
    d->s = double_array(buffer, filepath);
    d->sq = find_squares(buffer, filepath);
    return (d);
}
