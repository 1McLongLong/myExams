/*
Write a program that displays the number of arguments passed to it, followed by
a newline.
If there are no arguments, just display a 0 followed by a newline.
*/

#include <unistd.h> 

void ft_putchar(char c)
{
    write(1, &c, 1);
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
    else{
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int	main(int argc, char **argv)
{
	(void)argv; // By casting argv to void, we're telling the compiler that we are not using argv. 
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return 0;
}