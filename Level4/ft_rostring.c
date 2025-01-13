#include <unistd.h>
#include <stdio.h>

void	ft_rostring(char *str)
{
    int i;
    int start;
	int	flg = 0;
    //int pword;
	// hi  how  are you   //
	//0123456789
    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
            i++; //llego hasta la h
	start = i;  //guardo  la posición de la  primera palabra "hi", que tengo que mover al final
	while (str[i] > 32 && str[i] < 126)
		i++;  //me sitúo  al  final de la palabra, después de la i, la posición 3
	while (str[i] == ' ' || str[i] == '\t')
            i++;  //vuelvo  a saltar los espacios y ya me pongo en la primera palabra a copiar,  que es "how"
		//printf("%c", str[start]);
    while (str[i]) //aquí utilizo lo mismo que con epur_str, 
    {       
        if (str[i] > 32 && str[i] < 126)//si encuentra una palabra que la escriba escribo "how"
		{
            write(1, &str[i], 1);
			flg = 1;
		}
        else if (str[i] == ' ' && (str[i + 1] > 32 && str[i + 1] < 126))   //si encuentra espacio  y luego  letra imprime el espacio
		{
			write(1, " ", 1);
			flg = 0;
		}
		//el espacio después de how no cumple ningún if, pero está dentro del while, así  que incrementa y me pongo en el segundo if donde hay un espacio y luego  una letra, imprimo el espacio
		//luego  imprimo el are y luego el you
		//ahora como gestiono los espacios después de you, yo cumple ningún if son epacios incremento hasta llegar al final de la cadena, salgo del bucle
        i++;
    }
	//lo último que he impreso es you, es una palabra, así que flg vale 1, entra en el if y me imprime el espacio
	//cuando tengo una sola palabra como "hola", me ponía un espacio  por delante y necesito el flg porque con una palabra flg se inicia con el valor 0, y no  me imprime el espacio inicial
	// pq lo  imprime solo  cuando vale 1
	if (flg == 1)
		write(1, " ", 1);
		//ahora entro  en el while para imprimir la primera palabra guardada con start
	while (str[start] && str[start] > 32 && str[start] < 127)
	{
		write(1, &str[start], 1);
		start++;
	}
}
int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}


// {
// 	int	i;
// 	//int	start;


// 	i = 0;
// 	while (str[i] == ' ' || str[i] == '\t')
// 			i++;
// 	while (str[i])
// 	{	
// 		//start = i;
// 		if (str[i] != ' ' && str[i] != '\t')
// 			write(1, &str[i], 1);
// 		else if (str[i] == ' ' && str[i + 1] > 32 && str[i + 1] < 127)
// 			write(1, "   ", 3);
// 		i++;
// 	}
// }

// 


// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>
// #include <unistd.h>

// void write_word(char *start, char *end)
// {
//     while (start < end)
//     {
//         write(1, start, 1);
//         start++;
//     }
// }

// int main(int argc, char **argv)
// {
//     char *str;
//     char *first_word_start;
//     char *first_word_end;

//     if (argc > 1)
//     {
//         str = argv[1];
//         while (*str == ' ' || *str == '\t') 
//             str++;
//         first_word_start = str;
//         while (*str && *str != ' ' && *str != '\t')
//             str++;
//         first_word_end = str;
//         while (*str == ' ' || *str == '\t')
//             str++;
//         if (*str) {
//             while (*str)
//             {
//                 if (*str == ' ' || *str == '\t')
//                 {
//                     while (*str == ' ' || *str == '\t')
//                         str++;
//                     if (*str)
//                         write(1, " ", 1);
//                 } 
//                 else 
//                 {
//                     write(1, str, 1);
//                     str++;
//                 }
//             }
//             write(1, " ", 1);
//         }
//         write_word(first_word_start, first_word_end);
//     }
//     write(1, "\n", 1);
//     return 0;
// }