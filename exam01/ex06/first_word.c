/*
Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.
*/
#include <unistd.h>
#include <stdio.h>

    void ft_putchar(char c)
    {
        write(1, &c, 1);
    }   

void first_word(char *str)
{    

    while (*str == ' ' || *str  == '\t' || *str == '\n')
    {
        str++;
    }
    
    while (*str != ' ' && *str != '\t' && *str)
    {
        ft_putchar(*str);
        str++; 
    }
    ft_putchar('\n');
}


int main(int argc, char **argv)
{
    if(argc == 2)
    {
        first_word(argv[1]);
    }
    return 0;
}