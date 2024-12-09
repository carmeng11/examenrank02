#include <unistd.h>
int static ft_strlen(char *s)
{
	int	i;
	while (s[i])
		i++;
	return (i);

}
void	ft_putstr(char *s)
{
	int	i;
	
	i = 0;
	if (s)
	{
		write(1, s, ft_strlen(s));
	}
}

/*void    ft_putstr(char *s)
{
        int     i;

        i = 0;
        while (s[i])
        {
                write(1, &s[i], 1);
                i++;
        }
}*/
int	main()
{
char	*s = "hola";
ft_putstr(s);
return (0);
}
