#include <stddef.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t count;
    size_t i;

    count = 0;
    i = 0;
    while (*s)
    {
        while (reject[i] && *s != reject[i])
		//se compara la primera letra de s, en este caso h con "a", si no es igual itera y pasa a "e"
            i++;
        if (reject[i] != '\0')
            return (count);
        i = 0;
        count++;
        s++;
    }
    return (count);
}

int	main()
{
	char s[] = "hola mundo";
	char reject[] = "aeiou";

	printf("La longitud de la cadena es:%zu", ft_strcspn(s, reject));
	return (0);	
}