#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}

}
int	main()
{
	int tab[] = {3, 2, 5, 9, 7, 45, 23, 22, 21,198, 6, 4, 67};
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 13;
	sort_int_tab(tab, size);
	while (i < (size - 1))
	{
		printf("%d", tab[i]);
		printf("%s", " ");
		i++;
	}
	printf("%d", tab[i]);
	return (0);
}

