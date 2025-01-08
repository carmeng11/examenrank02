//COMPROBADO MI SOLUCION
#include <unistd.h>
#include <stdio.h>

void	rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') && str[i + 1] != ' ' && str[i + 1] != '\0')// si pongo la comprobación del tab me lo hace mal&& str[i + 1] == '\t')) //ME CAMBIA A MINUSCULAS TODAS LAS LETRAS EXCEPTO LAS FINALES DE CADA PALABRA Y LA ÚLTIMA AL LLEGAR AL CARACTER NULO
			str[i] += 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == ' ' || str[i + 1] == '\0' || str[i + 1] == '\t'))
		//Y ME CAMBIA A MAYUSCULA LA ULITMA LETRA DE CADA PALABRA SI ESTÁ EN MINÚSCULA, CHEQUEA ESPACIO TABULADOR Y CARACTER NULO
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}

// void    rstr_capitalizer(char *str)
// {
//     int i = 0;cd

//     while (str[i])
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//             str[i] += 32;
//         if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
//             str[i] -= 32;
//         write(1, &str[i++], 1);
//     }
// }

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		write(1, "\n", 1);

	i = 1;
	while (i < argc)
	{
		rstr_capitalizer(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);		
}



// int main(int argc, char **argv)
// {
//     int i;

//     if (argc == 1)
//         write(1, "\n", 1);
//     else
//     {
//         i = 1;
//         while (i < argc)
//         {
//             rstr_capitalizer(argv[i]);
//             write(1, "\n", 1);
//             i += 1;
//         }
//     }
//     return (0);
// }

// Allowed functions: write
// CAMBIA A MAYÚSCULA LA ÚLTIMA LETRA Y SI HAY UNA PALABRA CON UNA SOLA LETRA LA PONE EN MAYUSCULA, DA IGUAL QU ESTÉ AL RPNCIPIO O NO

// Write a program that takes one or more strings and, for each argument, puts
// the last character that is a letter of each word in uppercase and the rest
// in lowercase, then displays the result followed by a \n.

// A word is a section of string delimited by spaces/tabs or the start/end of the
// string. If a word has a single letter, it must be capitalized.

// A letter is a character in the set [a-zA-Z]

// If there are no parameters, display \n.

// Examples:

// $> ./rstr_capitalizer | cat -e
// $
// $> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
// A firsT littlE tesT$
// $> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
// seconD tesT A littlE biT   moaR compleX$
//    but... thiS iS noT thaT compleX$
//      okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
// $>
