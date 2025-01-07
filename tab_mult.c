#include <unistd.h>

void	ft_putnbr(int n)
{
	char	x;

	if (n > 9)
		ft_putnbr(n / 10);
	x = n % 10 + '0';
	write(1, &x, 1);
}
//cuidado que en la solución aparece completo aunque sin la commprobación de signo
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

// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays a number's multiplication table.

// The parameter will always be a strictly positive number that fits in an int,
// and said number times 9 will also fit in an int.

// If there are no parameters, the program displays \n.

// Examples:

// $>./tab_mult 9
// 1 x 9 = 9
// 2 x 9 = 18
// 3 x 9 = 27
// 4 x 9 = 36
// 5 x 9 = 45
// 6 x 9 = 54
// 7 x 9 = 63
// 8 x 9 = 72
// 9 x 9 = 81
// $>./tab_mult 19
// 1 x 19 = 19
// 2 x 19 = 38
// 3 x 19 = 57
// 4 x 19 = 76
// 5 x 19 = 95
// 6 x 19 = 114
// 7 x 19 = 133
// 8 x 19 = 152
// 9 x 19 = 171
// $>
// $>./tab_mult | cat -e
// $
