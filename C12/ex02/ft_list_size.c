#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*last;
	int	i;

	last = begin_list;
	i = 0;
	while (last)
	{
		i++;
		last = last->next;
	}
	return (i);
}