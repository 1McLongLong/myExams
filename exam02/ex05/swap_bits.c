/*
Write a function that takes a byte, swaps its halves (like the example) and
returns the result.
Your function must be declared as follows:
unsigned char	swap_bits(unsigned char octet);
*/
#include <unistd.h>
#include <stdio.h>


unsigned char swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

void print_bits(unsigned char octet) 
{
    int i = 7;
    while (i >= 0)
    {
        if ((octet >> i) & 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}

int main()
{
	unsigned char c = '&';

	printf("Character: %c\n", c);
	write(1,"Bits: ", 6);
	print_bits(c);

	unsigned char swapped = swap_bits(c);
	printf("\nSwapped: %c\n", swapped);
	write(1, "Swapped Bits: ", 15);
	print_bits(swapped);
	return 0;
}