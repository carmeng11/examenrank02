#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
	//printf("la primera palabra es:\n%s", argv[1])
	while(argv[1][i] == ' ' || argv[1][i] == '\t')
		i++;//el primer bucle es solo para quitar espacios tabuladores iniciales
    while(argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
    }
    write(1, "\n", 1);
}



void	ft_first_word(char *str)
{
	int	i;
	i = 0;
	
	while (str[i] == ' ' || str[i] == '\t')
			i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;			
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
