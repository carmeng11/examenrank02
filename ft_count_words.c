#include <stdio.h>

int count_words(char *str, char c)
{
    int i;
    int check;
    int count;

    i = 0;
    check = 0;
    count = 0;

    while (str[i])
    {
        if (str[i] != c && check == 0)
        {
            count++;
            check = 1;
        }
        else if (str[i] == c && check == 1)
            check = 0;
        i++;
    }
    return (count);
}

int count_words(char *str, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;

    while (str[i])
    {
        while (str[i] && str[i] == c)
            i++;
        if (str[i] != c)
            count++;
        while (str[i] && str[i] != c)
            i++;
    }
    return (count);
}




int main()
{
    char    str[] = "////hola////que////tal";
    char    c = '/';

    printf("El número de palabras finales es:%d", count_words(str, c));
    return (0);
}