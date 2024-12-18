#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	i = 0;	
	if (argc == 4)
	{
		while (argv[1][i] && (argv[2][1] == '\0' && argv[3][1] == '\0'))
		{
			if (argv[2][0] != argv[1][i])
				write(1, &argv[1][i], 1);
			else if (argv[2][0] == argv[1][i])
				write(1, &argv[3][0], 1);
			i++;		
		}
	}
	write(1, "\n", 1);	
}

void	ft_search_replace(char *str, char *a, char *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != a[j])// && (a[j + 1] == '\0' && b[j + 1] == '\0'))
			str[i] = str[i];
		else if (str[i] == a[j])// && (a[j + 1] == '\0' && b[j + 1] == '\0'))
			str[i] = b[j];
		write(1, &str[i], 1);
		i++;
	}

}

int	main(int argc, char **argv)
{
	if (argc == 4 && (argv[2][1] == '\0' && argv[3][1] == '\0'))
		ft_search_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return (0);
}
