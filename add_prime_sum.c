#include <unistd.h>

int ft_atoi(char *str)
{
    int result;
    result = 0;

    while (*str)
    {
        result = result * 10 + *str - '0';
        str--;
    }
    return (result);
}

void    ft_putnbr(int n)
{
    char    x;

    if (n > 9)
        ft_putnbr(n / 10);
    x = n % 10 + '0';
    write(1, &x, 1);  
}

int is_prime(int num)
{
    int i;

    i = num - 1;
    if (num <= 1)
        return (0);
    while (i > 1) // el de la solución es while (i * i < num) y luego incrementa i en lugar de decrementarlo
    {
        if (num % i == 0)
            return (0);
        i--;    
    }
        return (1);    
}


int add_prime_sum(int num)
{
    int sum;
    sum = 0;
    while (num > 1)
    {
        if (is_prime(num))
            sum += num;
        num--;
    }
    ft_putnbr(sum); //mucho cuidado en poner el putnbr antes del return, sino no imprime nada
    return (sum);
}


int main(int argc, char **argv)
{
    if (argc == 2)
        add_prime_sum(ft_atoi(argv[i]));
    if (argc != 2 || argv[1] < 0)
        write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}





Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>