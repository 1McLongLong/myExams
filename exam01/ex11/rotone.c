/*
Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.
'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.
The output will be followed by a \n.
If the number of arguments is not 1, the program displays \n.
*/

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rotone(char *str)
{
    while(*str)
    {
        if ((*str >= 'A' && *str <= 'Y') || (*str >= 'a' && *str <= 'y'))
        {
            ft_putchar(*str + 1);
        }
        else if ((*str == 'z' || *str == 'Z'))
        {
            ft_putchar(*str - 25);
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
        rotone(argv[1]);
    }
    write(1, "\n", 1);
}