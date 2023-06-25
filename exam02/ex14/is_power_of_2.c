/*
Write a function that determines if a given number is a power of 2.
This function returns 1 if the given number is a power of 2, otherwise it returns 0.
Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
*/
#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    int i = 1;
    while(i < n)
        i = i * 2;
    if (i == n)
        return 1;
    return 0;        
}


int	main(void)
{
	unsigned int	nb;

	nb = 0;
	while (nb++ < 100)
		if (is_power_of_2(nb))
			printf("%d is power of 2\n", nb);
	return (0);
}