#include <stdio.h>

// int ft_max(int *tab, unsigned int len)
// {
//     int i;
//     int temp;

//     i = 0;
//     while (i < len - 1)
//     {
//         if (tab[i] > tab[i + 1])
//         {
//             temp = tab[i];
//             tab[i] = tab[i + 1];
//             tab[i + 1] = temp;
//             i = 0;
//         }
//         i++;
//     }
// 	return (0);
// }


// int main()
// {
//     int tab[5] = {1, 7, 3, 6, 5};
// 	unsigned int size;

// 	int	i = 0;
// 	size = 5;
//     ft_max(tab, 5);
//     printf("La serie ordenada es:");
//     while (i < size)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     return (0);
// }
/*int	main(void)
{
	int	tab[8] = {3, 1, 8, 5, 9, 6, 4, 7};
	int	size;
	int	i;

	size = 8;
	i = 0;
	printf ("la serie inicial es: ");
	while (i < size)
	{
		printf ("%d ", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	printf ("\nLa serie invertida es:");
	i = 0;
	while (i < size)
	{
		printf ("%d ", tab[i]);
		i++;
	}
	return (0);
}*/

int	ft_max(int* tab, unsigned int len)
{
	int	i;
	int	temp;

	i = 0;

	while (i < len -1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab [i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
	i++;
	}
	return (0);
}

int main()
{
    int tab[] = {1, 7, 3, 23, 5, 9, 18, 21};
	unsigned int size;

	int	i = 0;
	size = 8;
    ft_max(tab, 8);
    printf("El número max es:");
	printf("%d ", tab[size - 1]);
    // while (i < size)
    // {
    //     printf("%d ", tab[size - 1]);
    //     i++;
    // }
    return (0);
}

int max(int *tab, unsigned int len)
{
	int result;
	unsigned int i = 0;
	
	if (len == 0)
		return (0);
	result = tab[i];
	while(i < len)
	{
		if (result <  tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}