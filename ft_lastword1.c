#include <unistd.h>
//no está bien, me pone un espacio por delante
// int main(int argc, char **argv)
// {
//     //int i;
//     int len;

//     //i = 0;
// 	len = 0;

//     if (argc == 2)
//     {
//         while (argv[1][len] != '\0')
//             len++;
//         while (len > 0 && argv[1][len] != ' ')
// 			len--;
//         while (argv[1][len] != '\0')
//         {
//             write(1, &argv[1][len], 1);
//             len++;
//         }
//     }
//     write(1, "\n", 1);
// }