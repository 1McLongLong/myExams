/*
Write a function that reverses (in-place) a string.
It must return its parameter.
Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

#include <stdio.h>
#include <unistd.h>

char *ft_strrev(char *str)
{
    int len = 0;
    while(str[len])
        len++;

    int i = 0;
    int j = len - 1;
    
    while(i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }    
    return str;
}

int	main(void)
{
	char	str[] = "erutuF";

	printf("str = %s\n", str);
	ft_strrev(str);
	printf("rev = %s\n", str);
	return (0);
}