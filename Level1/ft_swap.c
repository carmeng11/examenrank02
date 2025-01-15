#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
//este main está mal
// int	main()
// {
// 	int	*a;
// 	int	*b;

// 	*a = 42;
// 	*b = 3;
// 	ft_swap(a, b);
// 	printf("a y b son tras swap: %d y %d", *a, *b);
// 	return (0);
// }

int	main()
{
	int	*a = 32;
	int *b = 4;
	ft_swap(&a, &b);
	printf("los numeros intercambiados son: %d y %d", a, b);
	return (0);
}


