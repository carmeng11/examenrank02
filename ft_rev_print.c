/*int main(int argc, char ++argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (arggv[1][i] != '\0')
           i++;
        while (i > 0)
        {
            write(1, argv[1][i], 1);
            i--;
        }
    }
    write(1, "\n", 1);
}*/

#include <unistd.h>
#include <stdio.h>

/*char    *rev_print(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
           i++;
	i--;
    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    write(1, "\n", 1);
    return (str);
}*/
char	*rev_print(char *str)
{
	int	i = 0;
	
	while(str[i])
		i++;
	while(--i >= 0)
		write(1, &str[i], 1);
	write(1, "\n", 1);
	return (str);
}

int main()
{
    char	*str;
   
    str = "Hello world";
    int	i;

    i = 0;

    rev_print(str);
    printf("La cadena convertida es:\n%s",&str[i]);
    return (0);
}
