/*
Write a program that displays a 'a' character on the standard output.
*/

#include <unistd.h>

int main()
{
    write(1, "a\n", 2);
    return 0;
}