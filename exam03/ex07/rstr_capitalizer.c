/*
Write a program that takes one or more strings and, for each argument, puts 
the last character of each word (if it's a letter) in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.
If there are no parameters, display \n.
*/
#include <stdio.h>
#include <unistd.h>

void rstr_capitalizer(char *str)
{
    int i = 0;
    while (str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        
        if(str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == ' ' || str[i + 1] == '\t'))
        {
            str[i] -= 32;
        }
        write(1, &str[i], 1);
        i++;    
    }
}


int main(int argc, char **argv)
{
    if (argc < 1)
        write(1, "\n", 1);
    else
    {
        int i = 1;
        while(i < argc)
        {
            rstr_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }    
    return 0;
}