#include <unistd.h>

void	ft_epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
			i++;
	while (str[i])
	{
		while (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
			i++;	
		}
		if (str[i] == ' ' && str[i +1] && str[i] >= 32 && str[i] <= 126)
	}
}
int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_epur_str(argv[1]);
	write(1, "\n", 1);
}