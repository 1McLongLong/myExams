/*
Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.
*/
#include <stdio.h>
#include <unistd.h>

int	 main(int argc, char **argv)
{
	int i;
	int space;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		
		space = 0;
        while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				space = 1;
			
            if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				if (space)
					write(1, " ", 1);
				space = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

// Second Way

void	epur_str(char *str)
{
	if (*str)
	{
		while (*str && (*str == ' ' || *str == '\t'))
			str++;
		while (*str && *str != ' ' && *str != '\t')
		{
			write(1, &*str, 1);
			str++;
		}
		while (*str)
		{
			while (*str && (*str == ' ' || *str == '\t'))
				str++;
			if (*str)
				write(1, " ", 1);
			while (*str && *str != ' ' && *str != '\t')
			{
				write(1, &*str, 1);
				str++;
			}
		}
	}
}
