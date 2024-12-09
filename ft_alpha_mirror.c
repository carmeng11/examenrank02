#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int count;

    i = 0;
    if (argv[1][i]) == 2
    {
        while (argv[2][i])
        {
            count = (2 * 97 + 25 - argv[2][i]);
            write(1, &count, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}