/*
Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.
Your function must be declared as follows:

void	ft_swap(int *a, int *b);
*/
#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 12;
    int b = 61;
    ft_swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}