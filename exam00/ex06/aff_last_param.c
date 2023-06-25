/*
Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.
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
        ft_putstr(argv[argc - 1]);
    }
    else  
        write(1, "\n", 1);
}
