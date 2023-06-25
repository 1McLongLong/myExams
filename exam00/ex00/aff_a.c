/*
Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			i++;    
        }
    }
    else
    {
       write(1, "a", 1);   
    }
    write(1, "\n", 1);
    return 0;    
}

