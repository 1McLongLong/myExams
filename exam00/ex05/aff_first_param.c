/*
Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.
*/

#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
    write(1, "\n", 1);    
}

int main(int argc, char *argv[])
{
    if(argc > 1)
    {
        ft_putstr(argv[1]);
    }
    else  
        write(1, "\n", 1);
}