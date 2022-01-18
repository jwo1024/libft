#include	"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	result = ft_lstnew(f(lst -> content));
	while (lst -> next && result)
	{
		lst = lst -> next;
		tmp = ft_lstnew(f(lst -> content));
		if (!tmp)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, tmp);
	}
	return (result);
}
