#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list			*node;
	t_list			*tmp;

	node = *lst;
	while (node)
	{
		tmp = node;
		node = node->next;
		if (tmp->content && del)
			del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
