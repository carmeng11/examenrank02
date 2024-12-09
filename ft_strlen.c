#include <stdio.h>

int ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	main()
{
	char str[] = "hola";

	printf("La longitud de la cadena es:%d", ft_strlen(str));
	return (0);	
}