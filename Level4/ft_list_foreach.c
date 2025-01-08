void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
//t_list *begin_list: Este es un puntero al inicio de una lista enlazada de tipo t_list.
//void (*f)(void *): Este es un puntero a una función que toma un puntero genérico como argumento 
//y no retorna nada (void). Esta función será aplicada a cada elemento de la lista.
{
    while (begin_list) //La función continúa mientras haya nodos en la lista (es decir, mientras begin_list no sea NULL
    {
        (*f)(begin_list->data); //Llama a la función apuntada por f, pasando el dato del nodo actual (begin_list->data)
        begin_list = begin_list->next;//Luego, avanza al siguiente nodo estableciendo begin_list = begin_list->next.
    }
}