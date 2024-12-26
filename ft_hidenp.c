#include <unistd.h>

int    ft_hidenp(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s2[j] && s1[i])                
    {
        if (s2[j] == s1[i])// si encuentro un caractar de s1 en s2 tengo que pasar al siguiente en s1, 
            i++;   //itero s1, paso de la a a la o, y tengo que contnuar en s2 donde estaba sigo iterando j tb
        j++;
    }
    if (s1[i] == '\0') //si en s1 he llegado al carácter nulo significa que he encontrado todo el string
        write(1, "1", 1);
    else 
        write(1, "0", 1); //si no llega es porque no esta el string completo de s1 en s2
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_hidenp(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
/*
s1[] = aou;
s2[] = hola mundo

*/

/*#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	
	if (argc == 3)
	{
		while (argv[2][j] && argv[1][i])
		{
			if (argv[2][j] == argv[1][i])
				i++;
			j++;
		}
		if (argv[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}*/