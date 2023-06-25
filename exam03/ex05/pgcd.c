/*
Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int nb1;
    int nb2;

    if (argc == 3)
    {
        if((nb1 = atoi(argv[1])) > 0 && (nb2 = atoi(argv[2])) > 0)
        {
            while (nb1 != nb2)
            {
                if (nb1 > nb2)
                {
                    nb1 -= nb2;
                }
                else
                {
                    nb2 -= nb1;
                }
            }
            ft_putchar(nb1 + '0');
        }
    }
    ft_putchar('\n');
    return 0;
}