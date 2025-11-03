#include "../libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main()
{
	int a[1];
	int b[1];
	*a = 3;
	*b = 5;

	t_list *lst;
	t_list *new;
	lst = ft_lstnew(&a);
	new = ft_lstnew(&b);

	lst->content = a;
	new->content = b;

	ft_lstadd_front(&lst, new);
	printf("first: %i\n", *(int *)lst->content);
	printf("second: %i\n", *(int *)lst->next->content);
}*/