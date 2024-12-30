#include <unistd.h>

void	inter(char *s1, char *s2)  //saca los caracteres del primer string que aparecen tb en el segundo y sin repetirse
{
	unsigned char seen[256] = {0};
    int i;
    int j;


	i = 0;
    j = 0;
    while (s1[i])
    {
        while (s2[j])  // primero miramos el primer caracter de s1 en s2
	    {	
		    if (s1[i] == s2[j]) //si encontramos en s2 el primero de s1
            {
                if (!seen[(unsigned char)s1[i]]) //y no ha sido visto CUIDADO EN PONER LOS CORCHETES
                {
                    write(1, &s1[i], 1);  //lo escribimos
                    seen[(unsigned char)s1[i]] = 1; //al marcarlo a 1 indicamos que ha sido visto
                }
            } 
         j++; //iteramos en el segundo string hasta recorrerlo entero con el primer caracter
	    }
        j = 0; //salimos del bucle e igualamos a 0 j para empezar de nuevo 
        i++; //iteramos el primer string para pasar al segundo carácter y recorrerlo hasta el final
    }

}
// es igual al anterior añadiendo el break
void	inter(char *s1, char *s2)
{
	int	i;
	int	j;
	unsigned char seen[256] = {0};

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s2[j])
			{
				if (s1[i] == s2[j])
				{
					if (!seen[(unsigned char)s1[i]])  
					{
						write(1, &s1[i], 1);
						seen[(unsigned char)s1[i]] = 1;
					}
					break;//he añadido el break pq viene en la solución
				}
				j++;
			}
		j = 0;
		i++;
	}
}
int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

//$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
//padinto$
//saca los caraceres que están en ambos strings sin duplicarse, por eso la n la saca solo una vez

//solucion tiene un break
/*int main(int ac, char **av)
{
    int i;
    int j;
    unsigned char seen[256] = {0};
    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    if (!seen[(unsigned char)av[1][i]])
                    {
                        write(1, &av[1][i], 1);
                        seen[(unsigned char)av[1][i]] = 1;
                    }
                    break;IMPORTANTE!! Este break no lo tengo
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}*/

// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Examples:

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $

