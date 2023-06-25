/*
Write a program that takes a string and displays its last word followed by a \n.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or there are no words, display a newline.
*/
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}   

int ft_strlen(char *str)
{
    int i = 0;
    while(*str++)
        i++;
    return i;    
}

void last_word(char *str)
{
    int len = ft_strlen(str);
    int i = len - 1;
    while (i >= 0 && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
    {
        i--;
    }

    if (i >= 0)
    {
        while(i >= 0 && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            i--;
        }

        int j = i + 1;
        while(j < len)
        {
            ft_putchar(str[j]);
            j++;
        }
    }
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    if(argc == 2)
        last_word(argv[1]);
    return 0;
}
