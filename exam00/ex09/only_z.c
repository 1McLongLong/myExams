/*
Write a program that displays a 'z' character on the standard output.
*/

#include <unistd.h>

int main()
{
    write(1, "z\n", 2);
    return 0;
}