#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv)
{
    int n1;
    int n2;
    int x;
    int max_divisor;

    if (argc == 3)
	{
		n1 = atoi(argv[1]);  //IMPORTANTE PONERO DENTRO DEL IF
    	n2 = atoi(argv[2]);
    	if (n1 > n2)
        x = n2;
    	else
        x = n1;
    //printf("x vale:%d\n", x);
    	while (x > 0)
    	{
        	if (n1 % x == 0 && n2 % x == 0)
        	{
				printf("El max comun divisor es: %d", x);
            	break;
        	}
        	else
            x--;
    	}
    	//printf("El max común divisor es: %d\n", x);
    }
	if (x == 0)
		printf("No se encontró un max común divisor.\n");
    printf("\n");
    return (0);
}
// int main(int argc, char const *argv[])
// {
// 	int nbr1;
// 	int nbr2;

// 	if (argc == 3)
// 	{
// 		if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
// 		{
// 			while (nbr2 != 0)
// 			{
// 				int temp = nbr2;
// 				nbr2 = nbr1 % nbr2;
// 				nbr1 = temp;
// 			}
// 			printf("%d", nbr1);
// 		}
// 	}
// 	printf("\n");
// 	return (0);
// }

// Allowed functions: printf, atoi, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes two strings representing two strictly positive
// integers that fit in an int.

// Display their highest common denominator followed by a newline (It's always a
// strictly positive integer).

// If the number of parameters is not 2, display a newline.
//ENCONTRAR EL MAX COMUN DENOMINADOR

// Examples:

// $> ./pgcd 42 10 | cat -e
// 2$
// $> ./pgcd 42 12 | cat -e
// 6$
// $> ./pgcd 14 77 | cat -e
// 7$
// $> ./pgcd 17 3 | cat -e
// 1$
// $> ./pgcd | cat -e
// $