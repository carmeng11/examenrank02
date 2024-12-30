#include <stdio.h>

int is_prime(int num)
{
    int i;

    i = num - 1;
    if (num <= 1)
        return (0);
    while (i > 1)
    {
        if (num % i == 0)
            return (0);
        i--;    
    }
        return (1);    
}

int	main()
{
	int num = 14;
	printf("Si es 1 es número primo:%d", is_prime(num));
	return (0);
}


/*int main(int argc, char **argv)
{
    if (argc == 2 && atoi(angv[1]) > 0)
        add_prime_sum(atoi(argv[i]));
    write(1, "\n", 1);
    return (0);
}*/

/*Write a program that takes a positive integer as argument and displays the sum
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
$>*/
