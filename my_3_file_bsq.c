/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** BSQ
*/

#include "my.h"

char	*file_string(char *buffer, int size)
{
    int	i = length_of_the_first_line(buffer) + 1;
    int	j = 0;
    char	*new_buffer = malloc(sizeof(char) * size + 1);

    while (buffer[i] != '\0') {
        new_buffer[j] = buffer[i];
        i++;
        j++;
    }
    new_buffer[j] = '\0';
    return (new_buffer);
}

int	lines_string(char *filepath, char *buffer)
{
    int	i = 0;
    int	n = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            n++;
        i++;
    }
    return (n - 1);
}

char	**double_array(char *buffer, char *filepath)
{
    double_t	*d = malloc(sizeof(double_t));

    d = double_string(buffer, filepath);
    d->str = file_string(buffer, d->size);
    while (d->str[d->k] != '\0' && d->i < d->nb_rows) {
        d->arr[d->i] = malloc(sizeof(char) * d->nb_cols + 1);
        while (d->str[d->k] != '\n') {
            d->arr[d->i][d->j] = d->str[d->k];
            d->j++;
            d->k++;
        }
        d->k++;
        d->arr[d->i][d->j] = '\0';
        d->j = 0;
        d->i++;
    }
    d->arr[d->i] = NULL;
    return (d->arr);
}

int	min_2(int a, int b)
{
    if (a <= b)
        return (a);
    return (b);
}

int	min_3(int a, int b, int c)
{
    if (a <= min_2(b, c))
        return (a);
    return (min_2(b, c));
}
