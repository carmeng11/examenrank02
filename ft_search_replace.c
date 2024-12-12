#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	i = 0;	
	if (argc == 4)
	{
		while (argv[1][i] && (argv[2][1] == '\0' && argv[3][1] == '\0'))
		{
			if (argv[2][0] != argv[1][i])
				write(1, &argv[1][i], 1);
			else if (argv[2][0] == argv[1][i])
				write(1, &argv[3][0], 1);
			i++;		
		}
	}
	write(1, "\n", 1);	
}
// int main(int argc,char **argv)
// {
// 	int i = 0;
// 	char a = argv[2][0];
// 	char b = argv[3][0];
// 	if(argc == 4)
// 	{
// 		while (argv[1][i])
// 		{
// 			if(argv[1][i] == a)
// 				argv[1][i] = b;
// 			write(1,&argv[1][i],1);
// 			i++;
// 		}
// 		write(1,"\n",1);
		
// 	}
// }
/*int	main(int argc, char **argv)
{
	int	i;
	int	change;

	i = 0;	
	change = 0;
	if (argc == 4)
	{
		while (argv[1][i] && (argv[2][1] == '\0' && argv[3][1] == '\0'))
		{
			if (argv[2][0] != argv[1][i])
				change = argv[1][i];
			else if (argv[2][0] == argv[1][i])
				change = argv[3][0];
			write(1, &change, 1);
			i++;		
		}
	}
	write(1, "\n", 1);	
}*/