//COMPROBADO
#include <unistd.h>

int	ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

// void	ft_putnbr(int	nbr)
// {
// 	int	i;

// 	i = 0;
// 	if (nbr == -2147483648)
// 		write(1, "-2147483648", 11);
// 	else if (nbr < 0)
// 	{
// 		write(1, "-", 1);
// 		ft_putnbr(-nbr);
// 	}
// 	else if (nbr > 9)
// 	{
// 		ft_putnbr(nbr / 10);
// 		i = nbr % 10 + '0';
// 		write(1, &i, 1);
// 	}
// 	else
// 	{
// 		nbr = nbr + '0';
// 		write(1, &nbr, 1);
// 	}
// }

// int	main()
// {
// 	int	n = -4578799;

// 	ft_putnbr(n);
// 	return (0);
// }
