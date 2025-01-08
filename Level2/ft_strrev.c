#include <stdio.h>

/*char *ft_strrev(char *str)
{
	int i = -1;
	int length = 0;
	char temporary;

	while (str[length])
		length++;
	while (++i < length / 2)
	{
		temporary = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temporary;
	}
	return (str);
}*/
char *ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len -1 - i];
		str[len -1 -i] = temp;
		i++;
	}
	return (str);
}

int	main()
{
	char str[] = "holamundo";
	
	ft_strrev(str);
	printf("La cadena convertida es:%s",str );
	
	return (0);
}
/*#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;

	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 -i] = temp;
		i++;
	}
}

int	main(void)
{
	int	i;
	int	tab[8] = {3, 2, 8, 1, 4, 0, 7, 6};
	int	size;

	i = 0;
	size = 8;

	printf("La serie antes del cambio es:");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n ");

	ft_rev_int_tab(tab, size);
	printf("La serie después del cambio es:");

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
                i++;
	}
	printf("\n ");
	return (0);
}*/


