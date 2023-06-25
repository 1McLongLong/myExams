/*
Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.
*/
#include <stdio.h>
#include <unistd.h>

void wdmatch(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    while (str1[i] && str2[j]) 
    {
        if (str1[i] == str2[j])
        {
            i++; 
        }
        j++; 
    }

    if (str1[i] == '\0') 
    {
        write(1, "1", 1); 
    }
    else
        write(1, "0", 1);

    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        wdmatch(argv[1], argv[2]);
    }
    return 0;
}
