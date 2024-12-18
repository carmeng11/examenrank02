#include <stdio.h>
#include <stddef.h>

// size_t	ft_strspn(const char *s, const char *accept)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (*s)
// 	{
// 		while (accept[i] && *s !=  accept[i])
// 			i++;
// 		if (accept[i] == '\0')
// 			return (count);
// 		i = 0;
// 		count++;
// 		s++;			
// 	}
// 	return (count);
// }

#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t count;
    size_t i;

    count = 0;
    i = 0;
    while (*s)
    {
        while (accept[i] && *s != accept[i])
            i++;
        if (accept[i] == '\0')
            return (count);
        i = 0;
        count++;
        s++;
    }
    return (count);
}

int	main()
{
	char s1[] = "hola mundo";
	char s2[] = "MMMholoooo";
	
	//s2 = NULL;

	printf("La cadena a partir del primer caracter es:%zu", ft_strspn(s1, s2));
	return (0);	
}
