/*
Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.
If there are no arguments, the progam must display \n.
*/
#include <stdio.h>
#include <unistd.h>

void str_capitalizer(char *str)
{
	int	i;
    i = 0;
	
    if (str[i] >= 'a' && str[i] <= 'z')
    {
		str[i] -= 32;
    }
	write(1, &str[i], 1);
	
    while (str[++i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
        {
			str[i] += 32;
        }
		if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || str[i - 1] == '\t'))
        {
			str[i] -= 32;
        }
		write(1, &str[i], 1);
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
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }    
    return 0;
}