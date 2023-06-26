/*
Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.
*/
#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int sign, result;
    while(*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r' || *str == '\v' || *str == '\f')
        str++;

    sign = 1;
    while (*str == '+' || *str == '-')
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
    char c;
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int is_prime(int nb)
{
	if (nb <= 1)
	  return 0;

	int i;
	i = 2;

	while(i * i <= nb)
	{
		if(nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int	main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "0", 1);
    }
    else
    {
        int nb = ft_atoi(argv[1]);
        int sum = 0;
        while(nb > 0)
        {
            if(is_prime(nb))
                sum += nb;
            nb--;    
        }
        ft_putnbr(sum);
    }
    write(1, "\n", 1);
    return 0;
}