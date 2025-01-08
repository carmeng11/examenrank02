//COMPROBADO CON FUNCION  MAIN

#include <stdio.h>
#include <unistd.h>

//no está bien, me pone un espacio por delante
// int main(int argc, char **argv)
// {
//     //int i;
//     int len;

//     //i = 0;
// 	len = 0;

//     if (argc == 2)
//     {
//         while (argv[1][len] != '\0')
//             len++;
//         while (len > 0 && argv[1][len] != ' ')
// 			len--;
//         while (argv[1][len] != '\0')
//         {
//             write(1, &argv[1][len], 1);
//             len++;
//         }
//     }
//     write(1, "\n", 1);
// }

// int main(int argc, char **argv)
// {
//     int len;
//     int end;

//     len = 0;
//     end = 0;

//     if (argc == 2)
//     {
//         while (argv[1][len] != '\0')
// 		len++;
//         while (argv[1][len] == '\0' || (argv[1][len] >= 9 || argv[1][len] <= 13))
// 		len--;		
// 	end = argv[1][len];
//         while (argv[1][len] != ' ' && argv[1][len] != '\t')
// 		len--;
// 	while (--len < end)
// 	{
// 		write(1, &argv[1][len], 1);
// 		//len++;
// 	}
//     }
//     write(1, "\n", 1);
//     return (0);
// }



void    ft_lastword( char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i])  
    {
        //if (str[i] == ' ' && str[i + 1] >= 33)
		if (str[i] == ' ' && str[i + 1] > 32 && str[i + 1] < 127)
            j = i + 1;
        i++;
    }
	//lo que le digo es que mientras haya un espacio y el siguiente i+1 no sea espacio, 
	//sea un caracter comprendido entre 33 y 126 situo la variable j justo en el inicio 
	//de la palabra y esta situacion solo se dará en la última palabra
	//itero i y j será i + 1
	while (str[j] > 32 && str[j] < 127)
    {
        write(1, &str[j], 1);
        j++;
    } 
	//aqui digo que mientras sean caracteres imprimibles los imprimo e itero j
}
int main(int argc, char ** argv)
{
    if (argc == 2)
        ft_lastword(argv[1]);
    write(1, "\n", 1);
    return (0);
}

// int	main(int argc, char **argv)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][i])
// 		{
// 			if (argv[1][i]== ' ' && (argv[1][i + 1] >= 33 && argv[1][i + 1] <= 126))
// 				j = i + 1;
// 			i++;
// 		}
// 		while (argv[1][j] >= 33 && argv[1][j] <= 126)
// 		{
// 			write(1, &argv[1][j], 1);
// 			j++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }
