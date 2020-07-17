/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** my_strlen
*/

#include <unistd.h>

int	my_strlen(char *str)
{
    int	i = 0;

    if (str != NULL) {
        while (str[i] != '\0') {
            i++;
        }
        return (i);
    }
    return (0);
}
