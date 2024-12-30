#include <string.h>
#include <stdio.h>

/*size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t count;
    size_t i;
	//int j = 0;

    count = 0;
    i = 0;
    while (*s)
    {
        while (reject[i] && *s != reject[i])
		//aqui no itera s, comparamos a solo con la h, itera y coparamos luego e con la h,
            i++;
			//sale del bucle cuando termina la u entonces está en el caracter nulo, no entra en el siguiente if pq es el nulo
        if (reject[i] != '\0')
            return (count);
			// aqui volvemos a poner el contador 1 a 0, contamos la primera letra h con count, y ahora si iteramos scc ft_str
        i = 0;
        count++;
        s++;
    }
    return (count);
}*/


size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	count;

	i = 0;
	count =  0;
	while(*s)
	{
		while (reject[i] && *s != reject[i])
			i++;
		if (reject[i] != '\0')
			return (count);
		i = 0;// IMPORTANTE RECUERDA PONERLO A CERO
		count++;
		s++;
	}
	return (count);
}
int	main()
{
	char s[] = "hola mundo";
	char reject[] = "aeiu";

	printf("La longitud de la cadena es:%zu\n", ft_strcspn(s, reject));
	printf("La longitud de la cadena es:%zu\n", strcspn(s, reject));
	return (0);	
}


// Busca los caracteres de la segunda cadena en la primera y devuelve
// la longitud hasta el primer caracter encontrado, en el ejemplo
// devuelve 1 puesto que pasa la h y en la o ya encuentra un caracter del string 2.
// hay que iterar primero el string 2 y luego el 1, dos while

