#include <unistd.h>
#include <stdio.h>
// void	ft_rev_wstr(char *str)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (str[i])
// 	{
// 		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] >= 33 && str[i + 1] <= 126)
// 			j = i;
// 		i++;
// 	}
// 	while (str[j])
// 	{
// 		write(1, &str[j], 1);
// 		j++;
// 	}

// }
void	ft_rev_wstr(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	//printf("%c", str[i]);
	while (i >= 0)
	{
		while (str[i] == ' ' || str[i] == '\t')
			i--;
		while (str[i] >= 33 && str[i] <= 126)
			i--;
		j = i;
		while (str[j])
		{
			write(1, &str[j], 1);
			j++;
		}
		j = i;
		i--;
	}
	//printf("%c", str[i]);
	// while (i >= 0)
	// {
	// 	if (str[i] == ' ')
	// 		{
	// 			i = j;
	// 			write(1, &str[j], 1);
				
	// 		}
	// 		//j++;
	// }
	// i--;
}


int main(int argc, char **argv)
{
	if (argc == 2)
		ft_rev_wstr(argv[1]);
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}



// $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
// ironic? it Isn't gatherings. love I But people! hate You$
// $>./rev_wstr "abcdefghijklm"
// abcdefghijklm
// $> ./rev_wstr "Wingardium Leviosa" | cat -e
// Leviosa Wingardium$
// $> ./rev_wstr | cat -e
// $
// $>