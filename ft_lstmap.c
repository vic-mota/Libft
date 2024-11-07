#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;

	result = NULL;
	node = ft_lstnew(f(lst->content))
	if (lst == NULL || f == NULL)
	{
		return (NULL);
	}
	while (*lst)
	{
		if (node == NULL)
		{
			ft_lstclear(&node, (*del));
			return (NULL);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}