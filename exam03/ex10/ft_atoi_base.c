/*
Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.
The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".
Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".
Minus signs ('-') are interpreted only if they are the first character of the
string.
Your function must be declared as follows:
int	ft_atoi_base(const char *str, int str_base);
*/

#include <stdio.h>

int is_valid_base(char *base)
{
    int i = 0;
	while(base[i])
	{
		if(base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] >= 127)
			return 0;	
            
		int j = i + 1;
		while(base[j])
		{
			if(base[i] == base[j])
				return 0;
			j++;
		}
		i++;
	}
	return i > 1;
}

int char_to_int(char c, char *base)
{
    int i = 0;                                             
    while(base[i] != c && base[i] != '\0')
        i++;
    
    if (base[i] == '\0')
        return -1;
    
    return i;
}

int ft_atoi_base(char *str, char *base)
{
    int result = 0;
    int sign = 1;
    int i = 0;
    int value = 0;
    
    if(!is_valid_base(base))	
        return 0;
    
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
        i++;
    
    while (*str == '+' || *str == '-') 
	{
        if (*str == '-') 
            sign *= -1;
        str++;
    }
    
    int base_len = 0;
    while (base[base_len])
        base_len++;
    
    while (char_to_int(str[i], base) != -1)
	{
        value = char_to_int(str[i], base);  
        result = result * base_len + value; 
        i++;
    }
    return result * sign;   
}

int main()
{
    printf("%d\n", ft_atoi_base("011", "01"));
    printf("%d\n", ft_atoi_base("16", "01234567"));
    printf("%d\n", ft_atoi_base("123", "0123456789"));
    printf("%d\n", ft_atoi_base("FF", "0123456789ABCDEF"));

    return 0;
}    