#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	count;
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			//if (!((argv[1][i] >= 'a' && argv[1][i] <= 'z') && 
			//			(argv[1][i] >= 'a' && argv[1][i] <= 'z')))
			//	write(1, &argv[1][i], 1);
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				count = argv[1][i] - 32;
				write(1, &count, 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				count = argv[1][i] + 32;
                write(1, &count, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	
	}
	write(1, "\n", 1);
	return (0);
}

int main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] -= 32;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += 32;
			write(1, &argv[1][i], 1);
			i++;	
		}
	}
	write(1, "\n", 1);
}
