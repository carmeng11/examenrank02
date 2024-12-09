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
	int	*a;
	int	*b;

	*a = 42;
	*b = 3;
	ft_swap(a, b);
	printf("a y b son tras swap: %d y %d", *a, *b);
	return (0);
}
