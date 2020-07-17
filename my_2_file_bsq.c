/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** BSQ
*/

#include "my.h"

int	number_of_lines(char *buffer)
{
    int	number = 0;

    number = my_getnbr(buffer);
    return (number);
}

int	number_of_cols(char *buffer, char *filepath)
{
    int	i = 0;
    int	nb = 0;
    int	size = file_size(filepath) + 1;
    char	*str = malloc(sizeof(char) * size + 1);

    str = file_string(buffer, size);
    while (str[i] != '\n') {
        nb++;
        i++;
    }
    return (nb);
}

char	**allocate_memory(int line, int cols)
{
    char	**map = malloc(sizeof(char *) * line + 1);
    int	i = 0;

    map[i] = malloc(sizeof(char *) * cols + 1);
    for (i = 0; i < line; i++)
        map[i] = malloc(sizeof(char) * cols + 1);
    map[i] = NULL;
    return (map);
}

int	**memory_alloc(int line, int cols)
{
    int	**map = malloc(sizeof(int *) * line + 1);
    int	i = 0;

    map[i] = malloc(sizeof(int *) * cols + 1);
    for (i = 0; i < line; i++)
        map[i] = malloc(sizeof(int) * cols + 1);
    map[i] = NULL;
    return (map);
}
