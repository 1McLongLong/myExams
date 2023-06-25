/*
Write a function that takes two unsigned int as parameters and returns the
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common
multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and
calculate as follows:

        LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

  unsigned int    lcm(unsigned int a, unsigned int b);
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_abs(int x)
{
    return x < 0 ? -x : x; 
}

unsigned int gcd(unsigned int a, unsigned int b)
{
    if(a > 0 && b > 0)
    {
        while(a != b)
        {
            if (a > b)
                a -= b;
            else
                b -= a;    
        }
    }
    return a;
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    int gc_d = gcd(a, b);
    int lc_m = abs(a * b) / gc_d;
    printf("%d", lc_m);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        unsigned int a = atoi(argv[1]);
        unsigned int b = atoi(argv[2]);
        if (a == 0 || b == 0)
            printf("0");
        else    
            lcm(a, b);
    }
    printf("\n");
    return 0;
}