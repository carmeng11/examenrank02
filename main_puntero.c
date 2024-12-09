#include <stdio.h>

int	main(void)
{
	int	i = 0;
	char	str2[] = "La vida es bela";

	printf("1 caracter del string str2: %s\n", &str2[i]);
	printf("2 caracter del string str2: %s\n", str2);
	//se puede imprimir la cadena de la dos maneras
	printf("3 caracter del string str2: %c\n", str2[i]);
	printf("4 caracter del string str2: %c\n", *str2);
	//me imprime el primer caraćter de las dos maneras
	i++;
	//aunque itere con un índice cuando imprimo el puntero a la cadena sigue estando en el origen en i = 0
	printf("5 caracter del string str2: %s\n", str2);
	str2[0] = 'k';
	printf("5 caracter del string str2: %s\n", str2);
	//-----------

	char *str;
	char *orig_str;

	str = "que bello es vivir";
	orig_str = str;

	//str[0] = 'k'; Lo comento pq da error
	printf("6 caracter del string str: %s\n", str);
	str = str + 4;
	//cuando itero el puntero el puntero se desplaza, ahora se ha colocado en la b
	printf("7 caracter del string str: %c\n", *str);
	printf("7 caracter del string str: %s\n", str);
	// al iterar e puntero me saca la cadena movida a la posición 4
	//pero si imprimo orig_str me saca desde el origen
	printf("8 caracter del string str: %s\n", orig_str);
}
	
