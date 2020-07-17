/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** my_BSQ
*/

#include "my.h"

int	file_size(char *filepath)
{
    int	size = 0;
    struct	stat	st;

    stat(filepath, &st);
    size = st.st_size;
    return (size);
}

char	*read_file(char *filepath)
{
    int	fd = 0;
    int	size = file_size(filepath);
    char	*buffer = malloc(sizeof(char) * (size + 1));

    if (buffer == NULL)
        return (NULL);
    fd = open(filepath, O_RDONLY);
    if (fd < 0)
        return (NULL);
    if (size == 0)
        return (NULL);
    read(fd, buffer, size);
    close(fd);
    buffer[size + 1] = '\0';
    return (buffer);
}

int	length_of_the_first_line(char *buffer)
{
    int	i = 0;

    if (buffer != NULL) {
        while (buffer[i] != '\n') {
            i++;
        }
        return (i);
    }
    return (84);
}

int	main(int ac, char **av)
{
    char	*buffer = read_file(av[1]);

    if (ac != 2 || read_file(av[1]) == NULL || file_size(av[1]) == 0    \
        || number_of_lines(buffer) == 0 || \
        number_of_lines(buffer) > lines_string(av[1], buffer)) {
        write(2, "ERROR!\n", 7);
        exit(84);
    }
    print_max_square(buffer,av[1]);
    free(buffer);
    return (0);
}
