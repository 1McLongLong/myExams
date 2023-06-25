/*
Reproduce the behavior of the function strcmp (man strcmp).
Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
*/

#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main(void)
{
	char *str1;
	char *str2;
	str1 = "Hello";
	str2 = "Hell";
	printf("%d\n", ft_strcmp(str1, str2));
	return 0;
}