/*
Reproduce the behavior of the function strdup (man strdup).
Your function must be declared as follows:
char    *ft_strdup(char *src);
*/
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i = 0;
    while(src[i])
        i++;

    char *copy = malloc((i * sizeof(char)) + 1);
    if(!(copy))
        return NULL;
    
    i = 0;
    while(src[i])
    {
        copy[i] = src[i];
        i++;
    } 
    copy[i] = '\0';   

    return copy;
}

int main() {
    char *str;
    char *duplicate;
    str = "Hello, world!";
    duplicate = ft_strdup(str);

    printf("My made ft_strdup: %s\n", duplicate);
	free(duplicate);
    return 0;
}