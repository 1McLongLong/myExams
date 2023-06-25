/*
Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.
*/
#include <unistd.h>
#include <stdio.h>

int is_alpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int get_index(char c)
{
    int index = 0;
    char letter = 'a';
    if(c >= 'A' && c <= 'Z')
        c += 32;
    while(c != letter)
    {
        letter++;
        index++;
    }    
    return index;
}

void repeat_alpha(char *str)
{
    while(*str)
    {
        if (is_alpha(*str))
        {
            int index = get_index(*str);
            while(index--)
                 write(1, str, 1);
        }
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    repeat_alpha(argv[1]);
    write(1, "\n", 1);
}