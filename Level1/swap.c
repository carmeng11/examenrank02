#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int	a = 32;
	int b = 4;
	ft_swap(&a, &b);
	printf("los numeros intercambiados son: %d y %d", a, b);
	return (0);
}

// void	ft_swap(int a, int b)
// {
// 	int	temp;

// 	temp = a;
// 	a = b;
// 	b = temp;
// }

// int	main()
// {
// 	int	a = 32;
// 	int b = 4;
// 	ft_swap(a, b);
// 	printf("los numeros intercambiados son: %d y %d", a, b);
// 	return (0);
// }