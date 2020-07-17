/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** myputnbr
*/

void	my_putchar(char c);

int	my_put_nbr(int a)
{
    if (a < 0) {
        my_putchar('-');
        my_put_nbr(-a);
    } else if (a > 9) {
        my_put_nbr(a / 10);
        my_put_nbr(a % 10);
    } else {
        my_putchar(a + '0');
    }
    return (0);
}
