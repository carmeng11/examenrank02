//COMPROBADO

#include <stdlib.h>
#include "list.h"

t_list *sort_list(t_list* lst, int (*cmp)(int, int)) 
//t_list* lst: Es un puntero a la cabeza de la lista enlazada que se quiere ordenar. 
//lst es el nodo actual de la lista que se va recorriendo.
{
    //int (*cmp)(int, int): Es un puntero a una función de comparación que toma dos enteros 
    //como argumentos y devuelve un valor entero. Esta función de comparación se usa para 
    //decidir el orden relativo entre dos elementos. La firma del puntero de función cmp 
    //puede ser algo como:
//int compare(int a, int b);
//Si cmp(a, b) devuelve un valor negativo, a es menor que b.
//Si devuelve cero, a es igual a b.
//Si devuelve un valor positivo, a es mayor que b.
    int swap;
    t_list *start;

    start = lst;//Se guarda una referencia a la cabeza de la lista en start para poder devolverla 
    //más tarde, ya que la función cambiará la lista, pero es importante devolver la cabeza original de la lista ordenada.

    while (lst != NULL && lst->next != NULL)
    //Este bucle recorre la lista, y la condición lst != NULL && lst->next != NULL asegura que solo se ejecutará mientras 
    //haya más de un nodo en la lista. De esta manera, la lista no se recorrerá indefinidamente.
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        //Aquí se llama a la función de comparación (cmp) con los valores de datos de dos nodos consecutivos:
        //el nodo actual (lst->data) y el siguiente nodo (lst->next->data). Si la comparación devuelve 0 
        //(es decir, si lst->data y lst->next->data son "iguales" según el criterio de comparación), 
        //entonces se realiza un intercambio de sus valores de datos.


	{
        //Si la comparación indica que los valores son iguales, se intercambian los datos entre el nodo actual 
        //y el siguiente. El intercambio de valores se realiza con una variable temporal swap.
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = start;
        }
	else
    //Después de realizar el intercambio, se vuelve al principio de la lista para reiniciar el proceso de comparación, 
    //ya que al hacer un intercambio, es posible que se haya alterado el orden en los nodos previos a la posición actual.

		lst = lst->next;
        //Si no se realizó un intercambio (es decir, si lst->data y lst->next->data no son iguales según cmp), 
        //entonces simplemente se avanza al siguiente nodo en la lista.
    }
    return (start);
}




