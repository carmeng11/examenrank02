int	main(int argc, char ** argv)
{
	int	i = 0;
	if (argc == 2)

}

void	ft_putnbr(int n)
{
	char	x;

	while (n > 9)
	{
		ft_putnbr(n / 10);
		x = n % 10 + '0';
		write(1, &x, 1);
	}
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	// while (*str == ' ' || (*str >= 9 && *str <= 13))  
	// 	str++;
	// if (*str == '-')
	// 	sign = -1;
	// if (*str == '-' || *str == '+')
	// 	str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	result (result * sign);

	
}