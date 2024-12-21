#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{

int result = 0;
int	value = 0;
//int	i;
int	sign = 1;

while (*str == ' ' || (*str >= 9 && *str <= 13))
    str++;
if (*str == '-')
	sign = -1;
if (*str == '-' || *str == '+')
	str++;
if (str_base < 2 || str_base > 16)
	return (0);
while (*str)
{
	if (*str >= '0' && *str <= '9')
		value = value * str_base + (*str - '0');
	else if (*str >= 'a' && *str <= 'f')
		value = value * str_base + (*str - 'a' + 10);
	else if(*str >= 'A' && *str <= 'F')
		value = value * str_base + (*str - 'A' + 10);
	else
		break;
	str++;
	// if (*str >= '0' && *str <= '9')
	// 	result = *str - '0';
	// else if (*str >= 'a' && *str <= 'f')
	// 	result = *str - 'a' + 10;
	// else if(*str >= 'A' && *str <= 'F')
	// 	result = *str - 'A' + 10;
	// else if (result >= str_base)
	// 	break;
	// else
	// 	break;
	// value = value * str_base + result;
	// str++;
}
return (sign * value);
}
int main() {
   const char* binaryStr = "101";      // Base 2
   const char* octalStr = "2577412312578";          // Base 8  
   const char* hexStr = "1FBA23DB";            // Base 16
 
   printf("Binary to Decimal: %d\n", ft_atoi_base(binaryStr, 2));  
   printf("Octal to Decimal: %d\n", ft_atoi_base(octalStr, 8));    
   printf("Hexadecimal to Decimal: %d\n", ft_atoi_base(hexStr, 16));
   
   return 0;
}