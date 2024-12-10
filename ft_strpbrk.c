#include <stdio.h>

/*char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0
	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if(s2[i] == *s1)
				return (char *) s1;
			i++;
		}
		s1++;
	}
	return (NULL);	 
}*/

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return (char*)s1;
			i++;
		}
		s1++;
	}
	return (NULL);
}
int	main()
{
	char s1[] = "hola mundo";
	char *s2;
	
	s2 = NULL;

	printf("La cadena a partir del primer caracter es:%s", ft_strpbrk(s1, s2));
	return (0);	
}