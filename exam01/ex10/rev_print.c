/*
Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.
*/
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}   

void rev_print(char *str)
{
    int i = 0;
    while (str[i])
		i++;

    while(i >= 0)
        ft_putchar(str[i--]);
}

int main(int argc, char **argv)
{
    if(argc == 2)
        rev_print(argv[1]);
    ft_putchar('\n');    
    return 0;    
}