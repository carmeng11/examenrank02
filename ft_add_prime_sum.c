#include <unistd.h>
#include <stdio.h>

int	ft_is_primo(int result)
{
	int	i;
	i = 2;
	if (result <= 1)
		return (0);
		//los n primos son mayores que 1, por eso si es menor retornamos Q
	while (i * i <= result)
	{
		if (result % i == 0) //si encontramos un divisor a partir de 2 cuyo resto es 0 es que no es primo
			return (0);
		i++;// si no encontramos ese divisor incrementamos i hasta que sea menor que la raiz cuadrada de result
	}
	return (1);

}

//necesitammos el putnbr para imprimir el número
void	ft_putnbr(int n)
{
	char	x;

	if (n > 9)
		ft_putnbr(n / 10);
	x = n % 10 + '0';
	write(1, &x, 1);
}

//para convertir el número que metemos que es un string a entero
int	ft_atoi(char *str)
{
	// int	sign;
	// sign = 1;

	int	result;
	result = 0;
	// while (*str == ' ' || (*str >= 9 && *str <= 13))  
	// 	str++;
	// if (*str == '-')
	// 	sign = -1;
	// if (*str == '-' || *str == '+')
	// 	str++;
	// while (*str >= '0' && *str <= '9')
	while (*str)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	//printf("%d", result); //lo imprime
	return (result);
}

int	ft_add_prime_sum(int result)
{
	//int	result;
	int sum;

	sum = 0;
	while (result > 0) //tenemos que realizar la suma solo de los números primos que sean menores o iguales a result
	{
		if (ft_is_primo(result))//vamos decrementando pero solo suma los que sean primos
			sum += result;
		result--;
	}
//	printf("%d", sum);
	//return (sum);
	ft_putnbr(sum); //tenemos que hacer el putnbr de sum para poder imprimir el resultado de la suma OJO PONERLO ANTES DEL RETURN
	return (result);
}

int	main(int argc, char ** argv)
{
	int	result;
	//int	sum;

	if (argc == 2)
	{
		//ft_add_prime_sum(argv[1]);
		result = ft_atoi(argv[1]);
		ft_add_prime_sum(result);
	}
	if (argc != 2 || argv[1] < 0)
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
