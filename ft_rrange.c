#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int i;
    int *tab;
    int len;

    len = (end - start);
    if (len < 0)
        len = -len;
    tab = (int *)malloc((len + 1) * sizeof(int));
    i = len + 1;
    while (i > 0)
    {
        if (start < end)
            {
                tab[i] = end;
                end--;
                i--;
            }
        else
        {
            tab[i] = end;
            end++;
            i--;

        }
    }
    return (tab);
}


int main()
{
    int start;
    int end;
    int	*tab;
    int	i;
    int len;

    start = -2;
    end = -5;
    len = abs(end - start);
    tab = ft_rrange(start, end);
    printf("El rango entre %d y %d es:", start, end);
    i = len + 1;
    while (i > 0)
    {
	    printf("%d", tab[i]);
	i--;
    }
    free (tab);
    return (0);

}
