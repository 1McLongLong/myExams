/*
Write a function that displays all digits in ascending order.
*/

#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void)
{
    char c;
    c = '0';
    while (c <= '9')
    {
        write(1, &c, 1);
        c++;
    }
    write(1, "\n", 1);
}

void main()
{
    ft_print_numbers(); 
}