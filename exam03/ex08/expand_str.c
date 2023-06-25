/*
Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.
A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.
If the number of parameters is not 1, or if there are no words, simply display
a newline.
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
					write(1, "   ", 3);
				space = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}