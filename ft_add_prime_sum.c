#include <unistd.h>
#include <stdio.h>

//necesitammos el putnbr para imprimir el número
void	ft_putnbr(int n)
{
	char	x;

	if (n > 9)
		ft_putnbr(n / 10);
	x = n % 10 + '0';
	write(1, &x, 1);
	}
//para convertir el número que metemos que es un string a entero
int	ft_atoi(char *str)
{
	// int	sign;
	// sign = 1;

	int	result;
	result = 0;
	// while (*str == ' ' || (*str >= 9 && *str <= 13))  
	// 	str++;
	// if (*str == '-')
	// 	sign = -1;
	// if (*str == '-' || *str == '+')
	// 	str++;
	// while (*str >= '0' && *str <= '9')
	while (*str)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
	printf("%d", result);
}

void	ft_add_prime_sum(char *str)
{
	int	result;

	ft_atoi(str);
	ft_putnbr(result);
	//ft_putnbr (result);
}

int	main(int argc, char ** argv)
{
	int	result;

	if (argc == 2)
		//ft_add_prime_sum(argv[1]);
		ft_atoi(argv[1]);

	if (argc != 2 || argv[1] < 0)
	write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}