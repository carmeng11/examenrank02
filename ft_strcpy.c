#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

int main(void)
{
    char s1[] = "hola";
    char s2[] = "pepetu";
	//char	*s1;
	//char	*s2;

    //s1 = "hola";
    //s2 = "pepe";
	//así no puedo declararlo pq da error
    ft_strcpy(s1, s2);
    printf("La nueva cadena es: %s", s1);
    return (0);
}
