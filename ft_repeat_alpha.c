#include <unistd.h>

/*int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (!((argv[1][i] >= 97 && argv[1][i] <= 122) || (argv[1][i] >= 65 && argv[1][i] <= 90)))
			       write(1, &argv[1][i], 1);	
			j = argv[1][i];
			//while (argv[1][i] >= 97 && j >= 97)
			while ((j >= 97 && j <= 122) || (j >= 65 && j <= 90)) 
			{
				write(1, &argv[1][i], 1);
				//argv[1][i]--; esta condición imprime el carçacter y el resto hacia atrás, es decir si es una c imprime cba
				//write(1, argv[1], 4);
				j--;
			}
			i++;	
		}
	}
	write(1, "\n", 1);
}*/
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (!((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z')))
			       write(1, &argv[1][i], 1);	
			j = argv[1][i];
			//while (argv[1][i] >= 97 && j >= 97)
			while ((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z')) 
			{
				write(1, &argv[1][i], 1);
				//argv[1][i]--; esta condición imprime el carçacter y el resto hacia atrás, es decir si es una c imprime cba
				//write(1, argv[1], 4);
				j--;
			}
			i++;	
		}
	}
	write(1, "\n", 1);
}
// no lo hace bien, imprime dos veces la a, hacerlo como está arriba
/*int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				j = argv[1][i];
				while ((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z')) 
				{
					write(1, &argv[1][i], 1);
					//argv[1][i]--; esta condición imprime el carçacter y el resto hacia atrás, es decir si es una c imprime cba
					//write(1, argv[1], 4);
					j--;
				}
				i++;	
			}
			write(1, &argv[1][i], 1);
		}
		write(1, "\n", 1);
	}
	write(1, "\n", 1);
}*/
