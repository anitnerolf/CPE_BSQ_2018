/*
** EPITECH PROJECT, 2018
** fghjk
** File description:
** ghj
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

typedef	struct	print
{
    int	max_i;
    int	max_j;
    int	nb_rows;
    int	nb_cols;
    int	**sq;
    char	**s;
    int	max_s;
}	print_t;

typedef	struct	double_t
{
    int	i;
    int	j;
    int	k;
    int	nb_rows;
    int	nb_cols;
    int	size;
    char	*str;
    char	**arr;
    char	**s;
}	double_t;

print_t	*print(char *buffer, char * filepath);
double_t	*double_string(char *buffer, char *filepath);
int	lines_string(char *filepath, char *buffer);
int	my_put_nbr(int);
void	my_putchar(char);
int	my_strlen(char	const *);
int	my_getnbr(char const *);
int	number_of_lines(char *buffer);
int	number_of_cols(char *buffer, char *filepath);
char	**allocate_memory(int line, int cols);
char	*file_string(char *buffer, int size);
int	**memory_alloc(int line, int cols);
int	**int_array(char *buffer, char *filepath);
int	file_size(char *filepath);
char	*read_file(char *filepath);
int	length_of_the_first_line(char *buffer);
char	**double_array(char *buffer, char *filepath);
int	**find_squares(char *buffer, char *filepath);
int	min_2(int a, int b);
int	min_3(int a, int b, int c);
char	**print_max_square(char *buffer, char *filepath);
void	print_char_array(char *buffer, char *filepath, char **array);

#endif /* MY_H_ */
