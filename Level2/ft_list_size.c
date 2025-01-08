// typedef struct	s_list
// {
// 	struct s_list	*next;
// 	void			*data;
// }					t_list;

//****************************************************************** */
int	ft_list_size(t_list *begin_list) //Cuenta el número de nodos de una lista. 
{
    if (begin_list == 0)
        return (0);
    return (1 + ft_list_size(begin_list->next));
}

		#include "libft.h"

		int ft_lstsize(t_list *lst)  //Cuenta el número de nodos de una lista "LIBRERIA".
		{
			/* I used a tmp variable so that we don't modify the 
			* existing list
			*/
			t_list *tmp;
			int i;
			
			tmp = lst;
			i = 0;
			/* we loop as long as tmp is not equal to null
			* since the last element's next point to null
			* we will be iterating over all the elements of the list
			*/
			while (tmp)
			{
				/* set the tmp to be its 'next' element */
				tmp = tmp->next;
				i++;
			}
			/* returning the count */
			return (i);
		}