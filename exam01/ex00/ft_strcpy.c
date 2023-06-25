/*
Reproduce the behavior of the function strcpy (man strcpy).
Your function must be declared as follows:
char    *ft_strcpy(char *s1, char *s2);
*/

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
    char *temp = s1;
    while(*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return temp;
}

int main()
{
    char src[] = "Hello, world!";
	char dest[15];
    printf("%s\n", ft_strcpy(dest, src));
    return 0;
}