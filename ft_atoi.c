#include <unistd.h>

// int	ft_atoi(char *str)
// {
// 	int result = 0;
// 	int sign = 1;

// 	while (*str == ' ' || (*str >= 9 && *str <= 13))
//         str++;
// 	if (*str == '-')
// 		sign = -1;
// 	if (*str == '-' || *str == '+')
// 		str++;
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		result = result * 10 + *str - '0';
// 		str++;
// 	}
// 	return (sign * result);
// }
void	ft_putchar(char nbr)
{
	write(1, &nbr, 1);
}
void	ft_putnbr(int	nbr)
{
	int	i;

	i = 0;
	if (nbr == -2147483648)
		//write(1, "-2147483648", 11);
		ft_putchar('-');
		ft_putchar('2');
		//ft_putnbr(147483648);
}

int	main()
{
	int	n;

	n = -2147483648;
	ft_putnbr(n);
	return (0);
}
