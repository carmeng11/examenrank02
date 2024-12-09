#include <unistd.h>

int main(void)
{
    int n;
    int i;

    n = 1;
    while (n <= 100)
    {
	    if (n % 15 == 0)
		    write(1, "fizzbuzz\n", 9);
	    else if (n % 3 == 0)	    
		    write(1, "fizz\n", 5);
	    else if (n % 5 == 0)
		    write(1, "buzz\n", 5);
	    else if ( n < 9 && (n % 3 != 0 || n % 5 != 0))
	    {
		    i = (n % 10) + '0';
		    write(1, &i, 1);
                    write(1, "\n", 1);
	    }
	    else
	    {
		    i = (n / 10) + '0';
		    write(1, &i, 1);
		    i = (n % 10) + '0';
		    write(1, &i, 1);
		    write(1, "\n", 1);
	    }
	    n++;
    }
    return (0);
}
    /*while (n <= '9')
    {
        write(1, &n, 1);
        write(1, "\n", 1);
        n++;
    }*/


