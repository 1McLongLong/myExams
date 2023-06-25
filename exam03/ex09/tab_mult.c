/*
Write a program that displays a number's multiplication table.
The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.
If there are no parameters, the program displays \n.
*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int sign, result;
    while(*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\r' || *str == '\f' )
        str++;
    sign = 1;
    while(*str == '+' || *str == '-')
    {
        if(*str == '-')
        {
            sign = -sign;
        }
        str++;
    }
    result = 0;
    while(*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb < 10)
    {
        ft_putchar(nb + '0');
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int main(int argc, char **argv)
{
	int	i;
	int	nbr;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		nbr = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
	return 0;
}