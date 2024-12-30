#include <unistd.h>

void	ft_putnbr(int n)
{
	char x;

	if (n > 9)
		ft_putnbr(n / 10);
	x = n % 10 + '0';
	write(1, &x, 1);
}

int	main(int argc, char **argv)
{
	(void)argv; //se utiliza para evitar un aviso del compilador sobre la variable argv, ya que no se está utilizando en este código.

	ft_putnbr(argc - 1);  //argc - 1 nos da el número real de argumentos proporcionados al restar el nombre del propio programa
	write(1, "\n", 1);
	return (0);
}

// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the number of arguments passed to it, followed by
// a newline.

// If there are no arguments, just display a 0 followed by a newline.

// Example:

// $>./paramsum 1 2 3 5 7 24
// 6
// $>./paramsum 6 12 24 | cat -e
// 3$
// $>./paramsum | cat -e
// 0$
// $>