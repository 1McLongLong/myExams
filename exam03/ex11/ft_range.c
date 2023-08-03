/*
Write the following function:
int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.
*/
#include <stdlib.h>
#include <unistd.h>

int ft_abs(int x)
{
	return x < 0 ? -x : x;
}   

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int sign, result;
    while(*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r' || *str == '\v' || *str == '\f')
        str++;

    sign = 1;
    if (*str == '+' || *str == '-')
    {
        if(*str == '-')
        {
            sign = -sign;   
        }
        str++;
    }
    result = 0;
    while(*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;   
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb < 10)
    {
        ft_putchar(nb + '0');
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}


int     *ft_range(int start, int end)
{
    int *r;
    int len;
    if (end >= start)
        len = end - start + 1;
    else
        len = start - end + 1;
    
    r = malloc(sizeof(int) * len);
    if (r == 0)
        return 0;
    
    int i = 0;
    
    while(i < len)
    {
        if (end >= start)
            r[i] = start++;
        else
            r[i] = start--;
        i++;    
    }
    return r;
}


int main(int argc, char **argv)
{
    if (argc != 3)
        return 0;

    int start = ft_atoi(argv[1]);
    int end = ft_atoi(argv[2]);

    int *range = ft_range(start, end);

    int i = 0;
    while (i < ft_abs(start - end) + 1)
    {
        ft_putnbr(range[i]);
        ft_putchar(' ');
        i++;
    }
    ft_putchar('\n');
    free(range);

    return 0;
}

