#include <stdio.h>
#include <string.h>

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
	if (!s1 || !s2)  //recuerda ponerlo bien, no es !*s1
		return (NULL);
	while (*s1)
	{
		i = 0;//IMPORTANTE PONEERLO A CERO DENTRO DEL WHILE
		while (s2[i])//iteramos el string 2 y lo comparamos con el primer caracteer de s1, la h,
		            //si no lo encuentra pasa a la o
		{
			if (*s1 == s2[i])
				return (char *)s1;//comparamos todos los caracteres del string2, por eso 
								//al coincidir la e del segundo string con la e del primero
								//ya retorna ela mundo
			i++;
		}
		s1++;
	}
	return (NULL);
}

int	main()
{
	char s1[] = "hela mundo";
	char s2[] = "ae";
	//devuelve la cadena hasta el primer caracter encontrado
	//devolvería ela mundo pq recorre la segunda cadena y devuelve desde el 
	//s2 = NULL;

	printf("La cadena a partir del primer caracter es:%s\n", ft_strpbrk(s1, s2));
	printf("La cadena a partir del primer caracter es:%s", strpbrk(s1, s2));
	return (0);	
}





