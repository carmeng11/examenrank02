void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
// TENEMOS QUE DECLARAR UN PUNTERO *CUR QUE APUNTE AL PRIMER NODO DE LA LISTA
//COMPARAMOS LOS DATOS DE ESTE PRIMER NODO CON DATA_REF
//SI SON IGUALES TIENE QUE ELIMINARLO Y PASAR AL SIGUIENTE NODO, LIBERAR MEMORIA DE *CUR 
//Y LLAMAR RECURSIVAMENTE A LA FUNCION 
//parámetros: Un puntero doble que apunta al inicio de la lista enlazada. 
//Esto permite modificar el puntero del primer nodo si es necesario (por ejemplo, si se elimina el primer nodo).
//void *data_ref: Un puntero a los datos que se utilizarán para comparar con los elementos en la lista.
//int (*cmp)(): Una función de comparación que toma dos argumentos y devuelve 0 si son iguales.
{
	if (begin_list == NULL || *begin_list == NULL)
    //Esta línea comprueba si la lista está vacía o no existe (begin_list es NULL o el primer elemento 
    //apuntado por begin_list es NULL). 
		return; //si cualquiera de las dos condiciones es nula, la función retorna sin hacer nada

	t_list *cur = *begin_list; //inicializamos un puntero llamado cur que apunta al primer nodo de la lista

	if (cmp(cur->data, data_ref) == 0)//comparación y eliminación data_ref son los datos que se utilizarán 
    //para comparar con los elementos en la lista.
	{
		*begin_list = cur->next; //si son igules el puntero que apunta al inicio de la lista (*begin_list) se 
        //actualiza para que apunte al siguiente nodo (cur ->next) y elimina el primero
		free(cur);//se libera la memoria del nodo eliminado
		ft_list_remove_if(begin_list, data_ref, cmp);//se llama recursivamente a ft_list_remove_if para continuar 
        //buscando nodos que deban ser eliminados
	}
	else // Si el dato en el nodo actual no coincide con `data_ref`, la función llama recursivamente a sí misma 
	//para procesar el siguiente nodo en la lista (mediante `&cur->next`). 
	//Esto permite seguir verificando hasta llegar al final de la lista.
	{
		cur = *begin_list;
		ft_list_remove_if(&cur->next, data_ref, cmp); //DUDA CON EL &
	}
}