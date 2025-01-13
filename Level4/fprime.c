//COMPROBADO
#include <stdio.h>
#include <stdlib.h>

// int	is_prime(int num)
// {
// 	int	i;

// 	i = 2;
// 	if (num <= 1)
// 		return (0);
// 	while (i * i <= num)
// 	{
// 		if (num % i == 0)
// 			return (0);
// 		i++;
// 	}
// 	return (1);	
// }
// void	fprime(int	n)
// {
// 	int	num_prime;

// 	num_prime = 2;

// 	while (num_prime <= n)
// 	{
// 		if (is_prime(num_prime))
// 		{
// 			if (n % num_prime == 0)
// 			{
// 				printf("%d*", num_prime);
// 				n = n / num_prime;
				
// 			}
// 			//else if(n % num_prime != 0)
// 				//num_prime++;	
// 		}
// 		num_prime++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		printf("\n");
// 	else
// 	{
// 		fprime(atoi(argv[1]));
// 		printf("\n");
// 	}
// 	return (0);
// }

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	number;

	if (argc == 2)
	{
		i = 1;
		number = atoi(argv[1]);
		if (number == 1)// si el n que metemos es 1 imprime 1
			printf("1");
		while (number >= ++i) //el bucle comienz desde i = 2 hasta llegar al valor iguall o menor que number
		{
			if (number % i == 0) //si hay una división exacta indica que i es un factor de n
			{
				printf("%d", i);
				if (number == i) //si number coincide con el divisor que es el número primo ya acaba y salimos 
					break ;
				printf("*");
				number /= i;
				i = 1; //hay que establecer i a 1 para poder tener factores repetidos y que no incremente i uno más a su valor actual
			}
		}
	}
	printf("\n");
	return (0);
}
// Examples:

// $> ./fprime 225225 | cat -e
// 3*3*5*5*7*11*13$
// $> ./fprime 8333325 | cat -e
// 3*3*5*5*7*11*13*37$
// $> ./fprime 9539 | cat -e
// 9539$
// $> ./fprime 804577 | cat -e
// 804577$
// $> ./fprime 42 | cat -e
// 2*3*7$
// $> ./fprime 1 | cat -e
// 1$
// $> ./fprime | cat -e
// $
// $> ./fprime 42 21 | cat -e
// $