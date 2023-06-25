/*
Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.
The display will be followed by a \n.
If the number of arguments is not 2, the program displays \n.
*/
#include <stdio.h>
#include <unistd.h>

// Check if the character is already printed
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

void inter(char *str1, char *str2)
{
    int i = 0;
    while (str1[i])
    {
        int j = 0;
        while (str2[j])
        {
            if (str1[i] == str2[j])
            {
                if(check(str1, str1[i], i - 1))
                    write(1, &str1[i], 1);
                break;    
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 3)
        inter(argv[1], argv[2]);
    write(1, "\n", 1);    
    return 0;
}