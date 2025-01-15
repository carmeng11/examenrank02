#include <unistd.h>

void	ft_repeat_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{	
		j = str[i];
		while ((str[i] >= 'a' && str[i] <= 'z') && j > 'a')
		{	
			write(1, &str[i], 1),
			j--;
		} 
		while ((str[i] >= 'A' && str[i] <= 'Z') && j > 'A')
		{	
			write(1, &str[i], 1),
			j--;
		} 

		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	write(1, "\n", 1);
}