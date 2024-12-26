#include <stdlib.h>
#include <stdio.h>

//función de la solución usando abs
// int *ft_range(int start, int end)
// {
// 	int i = 0;
// 	int len = abs((end - start)) + 1;
// 	int *res = (int *)malloc(sizeof(int) * len);
	
// 	while (i < len)
// 	{
// 		if (start < end)
// 		{
// 			res[i] = start;
// 			start++;
// 			i++;
// 		}
// 		else
// 		{
// 			res[i] = start;
// 			start--;
// 			i++;
// 		}
// 	}
//         return (res);
// }
//función mía sin usar abs
int     *ft_range(int start, int end)
{
    int *tab;
    int i;
    int len;

    i = 0;
    len = end - start;
    if (len < 0)
        len = -len;
    tab = (int *)malloc((len + 1) * sizeof(int));
    if (!tab)
        return (0);
    while (i < len + 1)
    {
        if (start < end)
        {
            tab[i] = start;
            i++;
	        start++;
        }
        else
        {
            tab[i] = start;
            i++;
	        start--;
        }
    }
return (tab);
}

//main propio sin for
int main()
{
    int start;
    int end;
    int	*tab;
    int	i;
    int len;

    i = 0;
    start = 0;
    end = -3;
    len = abs(end - start);
    tab = ft_range(start, end);
    printf("El rango entre %d y %d es:", start, end);
    while (i < len + 1)
	{
	    printf("%d", tab[i]);
	i++;
    }
    free (tab);
    return (0);

}
// // main de chatgpt con for
// int main() {
//     int start, end;
//     int *range;
//     int i;
//     start = -2;
//     end = 5;

//     // Solicitar al usuario que ingrese los valores de inicio y fin
//     /*printf("Ingresa el valor de inicio: ");
//     scanf("%d", &start);
   
//     printf("Ingresa el valor de fin: ");
//     scanf("%d", &end);*/

//     // Obtener el rango utilizando ft_range
//     range = ft_range(start, end);
   
//     /*// Comprobar si la memoria se asignó correctamente
//     if (range == NULL) {
//         printf("Error al asignar memoria.\n");
//         return 1;  // Finaliza con error
//     }*/

//    /* Imprimir los resultados */
//    printf("El rango entre %d y %d es:\n", start, end);
//    for (i = 0; i <= abs(end - start); i++) {
//        printf("%d ", range[i]);
//    }
   
//    // Liberar la memoria asignada
//    free(range);

//    return 0; // Finaliza correctamente
// }