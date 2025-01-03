#include <unistd.h>
#include <stdio.h>

void	ft_rostring(char *str)
{
    int i;
    int start;
    //int pword;

    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
            i++;
	start = i;
	while (str[i] > 32 && str[i] < 126)
		i++;
	while (str[i] == ' ' || str[i] == '\t')
            i++;
		//printf("%c", str[start]);
    while (str[i])
    {       
        //pword = i;
        //printf("%c", str[i]);
        // while (str[i] > 32 && str[i] < 126)
        //     i++;
	    // while (str[i] == ' ' || str[i] == '\t')
        //     i++;
        if (str[i] > 32 && str[i] < 126)
            write(1, &str[i], 1);
        else if (str[i] == ' ' && (str[i + 1] > 32 && str[i + 1] < 126))
            write(1, " ", 1);
        i++;
    }
	write(1, " ", 1);
	while (str[start] && str[start] > 32 && str[start] < 127)
	{
		write(1, &str[start], 1);
		start++;
	}
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

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}

















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