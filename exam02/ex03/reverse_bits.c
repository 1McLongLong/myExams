/*
Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);
*/
#include <stdio.h>
#include <unistd.h>


unsigned char reverse_bits(unsigned char octet)
{
	unsigned char res = 0;
	int i = 8;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
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

	unsigned char reversed = reverse_bits(c);
	printf("\nReversed: %c\n", reversed);
	write(1, "Reversed Bits: ", 15);
	print_bits(reversed);
	return 0;
}
