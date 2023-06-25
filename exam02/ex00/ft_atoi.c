/*
Write a function that converts the string argument str to an integer (type int)
and returns it.
It works much like the standard atoi(const char *str) function, see the man.
Your function must be declared as follows:
int	ft_atoi(const char *str);
*/

#include <stdio.h>
#include <unistd.h>

int ft_atoi(const char *str)
{
    int sign, result;
    while(*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r' || *str == '\v' || *str == '\f')
        str++;

    sign = 1;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
        {
            sign = -sign;
        }
        str++;
    }    
    result = 0;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}



int main(void)
{
	const char *str = "  ---+--+1234ab567";
	int val = ft_atoi(str);
	printf("%d\n", val);
	return 0;
}
