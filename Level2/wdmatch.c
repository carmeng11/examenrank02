#include <unistd.h>
#include <stdio.h>

// void    wdmatch(char *s1, char *s2)
// {
//     int i;
//     int j;
      
//     i = 0;
//     j = 0;
//     while (s2[j])  //tengo que recorrer el segundo string y ver si se encuentran los caracteres de s1
//     {  
//         if (s1[i] == s2[j]) //si lo encuentro en 2 paso al siguiente en el 1, en el ej encuentro la f paso a la a
//             i++;
//         j++; //si no lo encuentro itero j, en el ej 3 la f no coincide con el primer carácter del string 2 
//                 //que es la q así que itero j y paso a la f que si coincide así que itero i paso a la o
//     }
//     if (s1[i] == '\0') //si se ha llegado al final del primer string es pq ha encontrado todos los cartacteres así que los escribo
//     // si no lo encuentra nunca llega al carácter nulo
//     {
//         i = 0;
//         while (s1[i])
//         {
//             write(1, &s1[i], 1);
//             i++;
//         }
//     }
// }
 
// int main(int argc, char **argv)
// {
//     if (argc == 3)
//         wdmatch(argv[1], argv[2]);
//     write(1, "\n", 1);
//     return (0);
// }


// /*$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
// faya$
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
// $
// $>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
// forty two$*/
// //saca el primer string si se encuentra en el segundo respetando el orden

#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;		
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}

}

int main(void)
{
	//print_bits(octet);
	print_bits(10);
	return (0);
}

unsigned char	reverse_bits(unsigned char octet)
{

	unsigned char	res;
	int	i = 8;
	while (i > 0)
	{

		res = res * 2 + (octet % 2);
		octet = octet / 2;

	i--;
	}

	return (res);
	
}


int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return (n & (n-1)) == 0;
}