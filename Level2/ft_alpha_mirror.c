#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int count;

    i = 0;
    if (argv[1][i]) == 2
    {
        while (argv[2][i])
        {
            count = (2 * 97 + 25 - argv[2][i]);
			 j=  'a' + ('z' - str[])
            write(1, &count, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while(argv[1][i]) 
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = ('a' + 'z') - argv[1][i];
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = ('A' + 'Z') - argv[1][i];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1,"\n",1);
	return (0);
}

void	alpha_mirror(char *str)
{
	int	i;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] =  ('a' + 'z' - str[i]);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] =  ('A' + 'Z' - str[i]);
		write(1, &str[i], 1);
		i++;
	}
}


int main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}