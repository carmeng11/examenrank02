int	ft_puthex(unsigned long long n, int bol)
{
	char	min;
	char	may;
	int		count;

	count = 0;
	min = "0123456789abcdef"[n % 16];
	may = "0123456789ABCDEF"[n % 16];
	if (n >= 16)
		count += ft_puthex(n / 16, bol);
	if (!bol)
		count += ft_putchar(min);
	else
		count += ft_putchar(may);
	return (count);
}
void	ft_print_hex(int n)
{
	char	min;

	min = "0123456789abcdef"[n % 16];

}
int	atoi(char *str)
{
	//int	sign;
	int	result;

	result = 0;
	// sign = 1;
	// while (*str = ' ' || (*str >= 9 && *str <= 13))
	// 	str++;
	// if (*str == '-')
	// 	sign = -1;
	// if	(*str == '-' || *str == '+')
	// 	str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_atoi(argv[]));
	write(1, "\n", 1);
}