#include<unistd.h>
#include<stdio.h>
void ft_last_word(char *str)
{
	int i = 0;
	int start;
	int end;
	while (str[i])
	{
		i++;
	}
	i--;
	end = i;
	while (str && (str[i] > ' '))
	{
		i--;
	}
	start = i + 1;
	while (start <= end)
	{
		write(1, &str[start], 1);
		start++;
	}
	write(1,"\n",1);
}
int main (int argc,char **argv)
{
	if(argc != 2)
	{
		write(1,"\n",1);
		return(1);
	}
	ft_last_word(argv[1]);
	return(0);
}