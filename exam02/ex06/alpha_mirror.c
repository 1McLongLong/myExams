/*
Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.
'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'
and so on.
Case is not changed.
If the number of arguments is not 1, display only a newline.
*/
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void alpha_mirror(char *str)
{
    while(*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            ft_putchar('A' - *str + 'Z');
        }
        else if (*str >= 'a' && *str <= 'z')
        {
            ft_putchar('a' - *str + 'z');
        }
        else  
            ft_putchar(*str);
        str++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        alpha_mirror(argv[1]);
    }
    return 0;
}
