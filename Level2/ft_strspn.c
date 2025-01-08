#include <stdio.h>
#include <string.h>

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
//devuelve la cantidad de caracteres encontrados del string2 en el string1
int	main()
{
	// char s1[] = "hola mundo";  //devolvería 3 encuentra hol
	// char s2[] = "MMMholoooo";

	// char s1[] = "hola mundo";  //devolvería 0 porque aunque está ol en el primer string
	// char s2[] = "MMMoloooo";   //debe encontrar desde el primer caracter del string1
	//                            //si no está la h ya devuelve 0
	// char s1[] = "hola mundo";  //devuelve 3
	// char s2[] = "holo"; 

	// char s1[] = "holamundo";  //devuelve 5 pq encuentra 5 caracteres del segundo string 
	// char s2[] = "hoalm";      //da igual que no estén ordenados

	// char s1[] = "hola mundo";  //devuelve 4 pq encuentra 4 caracteres del segundo string 
	// char s2[] = "aholo"; 

	char s1[] = "hola mundo"; //devuelve 2 pq encuentra el primer caracter la h en el string2
	char s2[] = "hu";         //y luego encuentra la u

	//s2 = NULL;

	printf("La cadena a partir del primer caracter es:%zu\n", ft_strspn(s1, s2));
	printf("La cadena a partir del primer caracter es:%zu", strspn(s1, s2));
	return (0);	
}
