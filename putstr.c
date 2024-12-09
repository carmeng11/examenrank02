#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

}
//es igual que la de arriba pero ahorro una línea
/*void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}*/

int	main()
{
	char	str[] = "hola";
	ft_putstr(str);
	return (0);
}
