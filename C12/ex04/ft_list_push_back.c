#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

t_list *ft_list_last(t_list *begin_list)
{
	t_list	*last;

	last = begin_list;
	while (last && last->next)
	{
		last = last->next;
	}
	return (last);
}

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		last = ft_list_last(*begin_list);
		last->next = ft_create_elem(data);
	}
}
