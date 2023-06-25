/*
Write a function that returns the length of a string.
Your function must be declared as follows:
int	ft_strlen(char *str);
*/
#include <unistd.h>
#include <stdio.h>


int ft_strlen(char *str)
{
    int i = 0;
    while(*str++)
        i++;
    return i;    
}

int main(void)
{
    char str[] = "Hello world!";
    printf("%d\n", ft_strlen(str));
}