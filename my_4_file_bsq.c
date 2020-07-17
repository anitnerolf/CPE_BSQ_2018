/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** BSQ
*/

#include "my.h"

int	**int_array(char *buffer, char *filepath)
{
    int	nb_rows = number_of_lines(buffer);
    int	nb_cols = number_of_cols(buffer, filepath);
    int	**str = memory_alloc(nb_rows, nb_cols);
    char	**arr = allocate_memory(nb_rows, nb_cols);

    arr = double_array(buffer, filepath);
    for (int i = 0; i < nb_rows; i++) {
        for (int j = 0; j < nb_cols; j++) {
            if (arr[i][j] == '.')
                str[i][j] = 1;
            if (arr[i][j] == 'o')
                str[i][j] = 0;
        }
    }
    return (str);
}

int	**find_squares(char *buffer, char *filepath)
{
    int	nb_rows = number_of_lines(buffer);
    int	nb_cols = number_of_cols(buffer, filepath);
    int	**str = memory_alloc(nb_rows, nb_cols);
    int	**sq = memory_alloc(nb_rows, nb_cols);

    str = int_array(buffer, filepath);
    for (int i = 0; i < nb_rows; i++)
        sq[i][0] = str[i][0];
    for (int j = 0; j < nb_cols; j++)
        sq[0][j] = str[0][j];
    for (int i = 1; i < nb_rows; i++) {
        for (int j = 1; j < nb_cols; j++) {
            int	k = min_3(sq[i][j - 1],sq[i - 1][j], sq[i - 1][j - 1]);
            if (str[i][j] == 1) {
                sq[i][j] = k + 1;
            } else if (str[i][j] == 0)
                sq[i][j] = 0;
        }
    }
    return (sq);
}

char	**print_char(char *buffer, char *filepath, char **str)
{
    int	nb_rows = number_of_lines(buffer);
    int	nb_cols = number_of_cols(buffer, filepath);
    for (int a = 0; a < nb_rows; a++) {
        for (int b = 0; b < nb_cols; b++) {
            my_putchar(str[a][b]);
        }
        my_putchar('\n');
    }
    return (str);
}

char	**print_max_square(char *buffer, char *filepath)
{
    print_t	*d = malloc(sizeof(print_t));

    d = print(buffer, filepath);
    for (int i = 0; i < d->nb_rows; i++) {
        for (int j = 0; j < d->nb_cols; j++) {
            if (d->max_s < d->sq[i][j]) {
                d->max_s = d->sq[i][j];
                d->max_i = i;
                d->max_j = j;
            }
        }
    }
    for (int i = d->max_i - d->max_s + 1; i <= d->max_i; i++) {
        for (int j = d->max_j - d->max_s + 1; j <= d->max_j; j++) {
            d->s[i][j] = 'x';
        }
    }
    print_char(buffer, filepath, d->s);
    return (d->s);
}
