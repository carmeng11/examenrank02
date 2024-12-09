#include <stddef.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t count;
    size_t i;
	int j = 0;

    count = 0;
    i = 0;
    while (s[j])
    {
        while (reject[i] && s[j] != reject[i])
		//se compara la primera letra de s, en este caso h con "a", si no es igual itera y pasa a "e"
            i++;
        if (reject[i] != '\0')
            return (count);
        i = 0;
        count++;
        j++;
    }
    return (count);
}

int	main()
{
	char s[] = "hola mundo";
	char reject[] = "aeiu";

	printf("La longitud de la cadena es:%zu", ft_strcspn(s, reject));
	return (0);	
}