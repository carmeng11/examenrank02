#include <stdio.h>
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

// int main(int argc, char **argv)
// {
//     int len;
//     int end;

//     len = 0;
//     end = 0;

//     if (argc == 2)
//     {
//         while (argv[1][len] != '\0')
// 		len++;
//         while (argv[1][len] == '\0' || (argv[1][len] >= 9 || argv[1][len] <= 13))
// 		len--;		
// 	end = argv[1][len];
//         while (argv[1][len] != ' ' && argv[1][len] != '\t')
// 		len--;
// 	while (--len < end)
// 	{
// 		write(1, &argv[1][len], 1);
// 		//len++;
// 	}
//     }
//     write(1, "\n", 1);
//     return (0);
// }



void    ft_lastword( char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i])  
    {
        //if (str[i] == ' ' && str[i + 1] >= 33)
		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
            j = i + 1;
        i++;
    }
    //while (str[j] && str[j] >= 33)
	while (str[j] >= 33 && str[j] <= 127)
    {
        write(1, &str[j], 1);
        j++;
    } 
}
int main(int argc, char ** argv)
{
    if (argc == 2)
        ft_lastword(argv[1]);
    write(1, "\n", 1);
    return (0);
}
