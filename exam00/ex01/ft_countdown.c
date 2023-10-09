/*
Write a program that displays all digits in descending order, followed by a
newline.
*/

#include <stdio.h>
#include <unistd.h>

// jqck
int main(void)
{
    char c;
    c = '9';
    while (c >= '0')
    {
        write(1, &c, 1);
        c--;
    }
    write(1, "\n", 1);
    return 0;
}
