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