 #include <stdio.h>
 
 unsigned int    lcm(unsigned int a, unsigned int b)
 {
    unsigned int i;
    i = 1;

    if (a == 0 || b == 0)
        return (0);
    while (i <= 2147483647)
    {
        if (i % a == 0 && i % b == 0)
            return (i);
        i++;
    }

 }

 {
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)  // es un bucle infinito
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}



 int main()
 {
    unsigned int    a;
    unsigned int    b;
    unsigned int    multiplo;

    a = 3;
    b = 5;
    multiplo = lcm(a, b);
    printf("El mínimo común múltiplo es:%d", multiplo);
    return (0);
 }