#include <unistd.h>

void	ft_putnbr(int n)
{
	char	x;

	if (n > 9)
		ft_putnbr(n / 10);
	x = n % 10 + '0';
	write(1, &x, 1);
}

int	atoi(char *str)
{
	int	result;
	
	result = 0;
	while (*str)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}



int	main(int argc, char **argv)
{
	int	i;
	int	n;
	
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		n = atoi(argv[1]);
		while (i <= 9 && n <= 238609294 )
		{
			ft_putnbr(i);
			write(1, " X ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
