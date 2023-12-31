/*
Write a function that displays a string on the standard output.
The pointer passed to the function contains the address of the string's first
character.
Your function must be declared as follows:

void	ft_putstr(char *str);
*/
#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}

int main(int argc, char **argv)
{
    ft_putstr(argv[1]);
    write(1, "\n", 1);
    return 0;   
}