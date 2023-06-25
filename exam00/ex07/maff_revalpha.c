/*
Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.
*/

#include <unistd.h>

void ft_putchar(char l)
{
    write(1, &l, 1);
}

int main(void)
{
    char c;
    c = 'z';
    while (c >= 'a')
    { 
        if (c % 2 == 0)
        {
            ft_putchar(c);
        }
        else
            ft_putchar(c - 32);
        c--;
    }   
    write(1, "\n", 1);
    return 0;
}
