/*
Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'
*/
#include <unistd.h>
#include <stdio.h>

void ulstr(char *str)
{
    while(*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        write(1, str, 1);    

        str++;    
    }

}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        ulstr(argv[1]);
    }
    write(1, "\n", 1);
}