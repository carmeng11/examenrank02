#include <stdlib.h>
#include <stdio.h>


/*char	*ft_strdup(char *src)
{
	int	i = 0;
	int	length = 0;
	char	*strcpy;

	while (src[length])
		length++;
	strcpy = malloc(sizeof(*strcpy) * (length + 1));
	if (strcpy != NULL)
	{
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}*/

char	*ft_strdup(char *s1)
{
	char	*dst;
	int		i;
	size_t		len;

	len = 0;
	while (s1[len])//tengo que saber la longitud de s1 para hacer malloc de len + 1
		len++;

	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
int	main(void)
{
	char s1[] = "Hello world";
	char dst[] = "Hola";
	
	printf("la cadena de destino es:%s", ft_strdup(s1));
	return (0);
}


