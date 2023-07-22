/*
Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.
The display will be in the order characters appear in the command line, and
will be followed by a \n.
If the number of arguments is not 2, the program displays \n.
*/
#include <stdio.h>
#include <unistd.h>

int check(char *str, char c, int nb)
{
    while(nb >= 0)
    {
        if(str[nb] == c)
           return 0;
        nb--;   
    }
    return 1;
}

void ft_union(char *str1, char *str2)
{
    int i = 0;
    while (str1[i])
    {
        if(check(str1, str1[i], i - 1))
            write(1, &str1[i], 1);
        i++;
    }
    
    int j = 0;
    while (str2[j])
    {
        //Check character if it's in first string then the second string 
        if (check(str1, str2[j], i - 1) && check(str2, str2[j], j - 1))
            write(1, &str2[j], 1);
        j++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        ft_union(argv[1], argv[2]);
    }
    return 0;
}

