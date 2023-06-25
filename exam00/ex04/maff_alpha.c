/*
Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.
*/

#include <unistd.h>

void ft_putchar(char l)
{
    write(1, &l, 1);
}

int main(void)
{
    char c; 
    c = 'a';
    while (c <= 'z')
    {
        if (c % 2 == 0)
        {
            ft_putchar(c - 32);
        }
        else
            ft_putchar(c);
        c++;
    }   
    write(1, "\n", 1);
    return 0;
}

