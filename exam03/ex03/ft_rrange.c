/*
Write the following function:
int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
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


int *ft_rrange(int start, int end)
{
    int *r;
    int len;
    len = (end >= start) ? end - start + 1 : start - end + 1;

    if(!(r = (int*)malloc(len * sizeof(int))))
        return 0;
    while(len--)
        r[len] = end >= start ? start++ : start--;
    return r;           
}


int main(int argc, char **argv)
{
    if (argc != 3)
        return 0;

    int start = ft_atoi(argv[1]);
    int end = ft_atoi(argv[2]);

    int *range = ft_rrange(start, end);

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



