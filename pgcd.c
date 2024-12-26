#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv)
{
    int n1;
    int n2;
    int x;
    int max_divisor;

    if (argc == 3)
    {
    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);
    if (n1 > n2)
        x = n2;
    else
        x = n1;
    //printf("x vale:%d\n", x);
    while (x > 0)
    {
        if (n1 % x == 0 && n2 % x == 0)
        {
			printf("El max común divisor es: %d", x);
            break;
        }
        else
            x--;
    }
    //printf("El max común divisor es: %d\n", x);
    }
	if (x == 0)
		printf("No se encontró un max común divisor.\n");
    printf("\n");
    return (0);
}
// int main(int argc, char const *argv[])
// {
// 	int nbr1;
// 	int nbr2;

// 	if (argc == 3)
// 	{
// 		if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
// 		{
// 			while (nbr2 != 0)
// 			{
// 				int temp = nbr2;
// 				nbr2 = nbr1 % nbr2;
// 				nbr1 = temp;
// 			}
// 			printf("%d", nbr1);
// 		}
// 	}
// 	printf("\n");
// 	return (0);
// }