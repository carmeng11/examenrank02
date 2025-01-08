#include <unistd.h>

void    ft_expand(char *str)
{
    int i;

    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i])
    {
        if (str[i] > 32 && str[i] < 126)
            write(1, &str[i], 1);
        else if (str[i] == ' ' && str[i + 1] > 32 && str[i + 1] < 126)
            write(1, "   ", 3);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_expand(argv[1]);
    write(1, "\n", 1);
    return (0);
}
//LE DIGO QUE SI ENCUENTRA UNA LETRA LA ESCRIBA Y SI ENCUENTRA UN ESPCIO Y LO
//SIGUIENTE ES UNA LETRA QUE ESCRIBA TRES ESPACIOS
// $> ./expand_str "See? It's easy to print the same thing" | cat -e
// See?   It's   easy   to   print   the   same   thing$
// $> ./expand_str " this        time it      will     be    more complex  " | cat -e
// this   time   it   will   be   more   complex$
// $> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
// $
// $> ./expand_str "" | cat -e
// $
// $>
