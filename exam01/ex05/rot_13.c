/*
Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.
*/
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rot_13(char *str)
{
    while(*str)
    {
        if ((*str >= 'A' && *str <= 'M') || (*str >= 'a' && *str <= 'm'))
        {
            ft_putchar(*str + 13);
        }
        else if ((*str >= 'N' && *str <= 'Z') || (*str >= 'n' && *str <= 'z'))
        {
            ft_putchar(*str - 13);
        }
        else  
            ft_putchar(*str);
        str++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        rot_13(argv[1]);
    }
    write(1, "\n", 1);
}
