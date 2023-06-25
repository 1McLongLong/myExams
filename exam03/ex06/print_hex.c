/*
Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.
If the number of parameters is not 1, the program displays a newline.
*/

#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int sign, result;
    while(*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r' || *str == '\v' || *str == '\f')
        str++;

    sign = 1;
    if (*str == '+' || *str == '-')
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

void print_hex(int nbr, char *base)
{

	if(nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	
    if (nbr >= 16)
	{
		print_hex(nbr / 16, base);
	}
	write(1, &base[nbr % 16], 1); 
}


int main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]), "0123456789abcdef");
	write(1, "\n", 1);
	return (1);
}
