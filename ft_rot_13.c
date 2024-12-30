#include <unistd.h>

// int main(int argc, char **argv)
// {
//     int i;
//     //int count;

//     i = 0;
//     if (argc == 2)
//     {
//         while (argv[1][i] != '\0')
// 		{
// 			if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
// 			{
// 				//count = (argv[1][i] + 13);
// 				//write(1, &count, 1);
// 				argv[1][i] += 13;
// 			}
//         	else if ((argv[1][i] > 'm' && argv[1][i] <= 'z') || (argv[1][i] > 'M' && argv[1][i] <= 'Z'))
// 			{
// 				// count = (argv[1][i] - 13);
//             	// write(1, &count, 1);
// 				argv[1][i] -= 13;
// 			}
// 			write(1, &argv[1][i], 1);
//         	i++;
//     	}
// 	}
//     write(1, "\n", 1);
//     return (0);
// }


// solución del examen

// int	main(int argc, char **argv)
// {
// 	int i = 0;

// 	if (argc == 2)
// 	{
// 		while(argv[1][i])
// 		{
// 			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
// 				argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
// 			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
// 				argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
// 			write(1, &argv[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

void	ft_rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			str[i] += 13;
		else if ((str[i] > 'm' && str[i] <= 'z') || (str[i] > 'M' && str[i] <= 'Z'))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}

}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_13(argv[1]);
	write(1, "\n", 1);
	return(0);
}



