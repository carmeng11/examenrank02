#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{

//int result = 0;
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
		value = value * str_base + *str + '0';
	else if (*str >= 'a' && *str <= 'f')
		value = value * str_base +(*str - 'a' + 10) + '0';
	else if(*str >= 'A' && *str <= 'F')
		value = value * str_base +(*str - 'A' + 10) + '0';
	str++;	
}
return (sign * value);
}
int main() {
   const char* binaryStr = "10101";      // Base 2
   const char* octalStr = "25";          // Base 8  
   const char* hexStr = "1A";            // Base 16
 
   printf("Binary to Decimal: %d\n", ft_atoi_base(binaryStr, 2));  
   printf("Octal to Decimal: %d\n", ft_atoi_base(octalStr, 8));    
   printf("Hexadecimal to Decimal: %d\n", ft_atoi_base(hexStr, 16));
   
   return 0;
}