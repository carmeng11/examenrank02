#include <unistd.h>
#include <stdio.h>

void	ft_rev_wstr(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	// Hola que /
	//0123456789/
	while (str[i])
		i++; //recorro la cadena hasta el final
	i--;     // resto uno para situarme antes del carácter nulo, justo en 9
	//printf("%c", str[i]);
	//printf("\n");
	while (i > 0)
	{
		while (str[i] == ' ' || str[i] == '\t') //tengo que quitar todos los espacios y tabulaciones del final
			i--; //aqui estoy en la "e"
		while (str[i] >= 33 && str[i] <= 126) //mientras encuentre letras lo recorro hasta el principio de la letra
			i--; //aqui estoy justo en el espacio antes de la "q", en el 5  i = 5
		j = (i + 1); //tengo que situarme un carácter por delante para estar en la primera letra de la última palabra, j = q
		while (str[j] >= 33 && str[j] <= 126) 
		{
			write(1, &str[j], 1); //dentro del bucle escribo toda la palabra "que" y j está en el caracter siguiente a la última letra de la palabra j = 9
			j++;
		}
		if (i > 0)
			write(1, " ", 1);
	}
}
	// while (i >= 0)
	// {
	//UNA VEZ ESCRITA LA PRIMERA PALBRA I = 5 ES UN ESPAACIO
	// 	while (str[i] == ' ' || str[i] == '\t') //SE SALTA LOS ESPACIOS Y SE QUEDA EN LA "A" I = 4
	// 		i--; //AQUI ESTOY EN LA "A" POSICCION 4
	// 	while (str[i] >= 33 && str[i] <= 126) //mientras encuentre letras lo recorro hasta el principio de la letra
	// 		i--; //AQUI ESTOY JUSTO EN EL ESPACIO ANTES DE LA "H", EN LA POSICION 1 I = 0
	// 	j = (i + 1); //ME SITUO UN CARACTER POR DELANTE PARA ESTAR EN LA "H" J = 1
	//	while (str[j] == ' ')
	//		j++;
	// 	while (str[j] >= 33 && str[j] <= 126) 
	// 	{
	// 		write(1, &str[j], 1); //dentro del bucle escribo toda la palabra "que" y j está en el caracter siguiente a la última letra de la palabra j = 9
	// 		j++;
	// 	}
	// 	write(1, " ", 1);
	// }
// }


//SOLUCION VISTA CON KONRAD
// void	ft_rev_wstr(char *str)
// {
// 	int	i;
// 	int	start;
// 	int	end;

// 	while (str[i])
// 		i++;
// 	i--;
// 	while (i >= 0)
// 	{
// 		while (str[i] == ' ' || str[i] == '\t')
// 			i--;
// 		end = i;
// 		//printf ("end es %c\n", str[i]);
// 		while (str[i] && str[i] != ' ' && str[i] != '\t')
// 			i--;
// 		start = i + 1;
// 		//printf ("start es %c", str[start]);
// 		while (start <= end)
// 		{
// 			write(1, &str[start], 1);
// 			start++;
// 		}
// 		if (i > 0)
// 		{
// 			write(1, " ", 1);
// 		}
// 	}		
// }

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rev_wstr(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
//SOLUCION EXAMEN

// int main(int argc, char **argv)
// {
// 	int start;
// 	int end;
// 	int i = 0;
		
// 	if(argc == 2)
// 	{   
// 		while(argv[1][i] != '\0')
// 			i++;
// 		while(i >= 0)
// 		{
// 			while( argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
// 				i--;
// 			end = i;
// 			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
// 				i--;
// 			start = i + 1;
// 			int  flag;
// 			flag = start;
// 			while(start <= end)
// 			{
// 				write (1, &argv[1][start],1);
// 				start++;		
// 			}
// 			if (flag !=0)
// 				write(1, " ", 1);
// 		}
// 	}
// 	write(1, "\n", 1);
// }


// Hola que /
//0123456789/

// $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
// ironic? it Isn't gatherings. love I But people! hate You$
// $>./rev_wstr "abcdefghijklm"
// abcdefghijklm
// $> ./rev_wstr "Wingardium Leviosa" | cat -e
// Leviosa Wingardium$
// $> ./rev_wstr | cat -e
// $
// $>

	
	