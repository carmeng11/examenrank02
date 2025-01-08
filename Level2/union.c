#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
    int i;
    int j;
    unsigned char seen[256] = {0};

    i = 0;
    j = 0;
    while(s1[i])
    {
        if (!seen[(unsigned char) s1[i]]) //si no ha sido visto en el string1 lo escribo y lo pongo a 1 para indicar que ha sido visto
        {
            write(1, &s1[i], 1);
            seen[(unsigned char)s1[i]] = 1;
        }
        i++;
    }
    while(s2[j])
    {                //ahora lo hacemos con el string2, si no ha sido visto lo escribo y lo pongo a 1 para indicar que ha sido visto
        if (!seen[(unsigned char) s2[j]]) // && (!seen[(unsigned char) s1[i]])) no es necesario hacer esta comprobación aunque se puede dejar, no da error
        {
            write(1, &s2[j], 1);
            seen[(unsigned char)s2[j]] = 1;
        }
        j++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
//SACA LOS CARACTERES QUE APARECEN EN CUALQUIERA DE LAS CADENAS SIN REPETIRSE
//$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
//zpadintoqefwjy$
//saca tanto los caracteres del string1 como del 2 sin repetirse, mientras estén en cualquiera de ellos, 
//no tienen que estar en los dos, por ello el primer string lo copia tal cual, excepto la última n pq está repetida

// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in either one of the strings.

// The display will be in the order characters appear in the command line, and
// will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Example:

// $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$
// $>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6vewg4thras$
// $>./union "rien" "cette phrase ne cache rien" | cat -e
// rienct phas$
// $>./union | cat -e
// $
// $>
// $>./union "rien" | cat -e
// $
// $>