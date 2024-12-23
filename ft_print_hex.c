#include <unistd.h>
#include <stdio.h>

int	ft_atoi( char *str)
{
	int	result;
	result = 0;

	while (*str)
	{
		result = result *10 + *str -'0';
		str++;
	}
	return (result);
	//printf("%d", result);
}


void	ft_print_hex(int num)
{
	char check_hex[] = "0123456789abcdef";

	if (num >= 16)
		ft_print_hex(num / 16);
	write(1, &check_hex[num % 16], 1);
}


int main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}


























