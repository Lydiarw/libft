#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int main()
{
	t_list *mylist1;
	t_list *mylist2;
	t_list *mylist3;
	int a[1];
	int b[1];
	int c[1];

	*a = 9;
	*b = 7;
	*c = 5;
	mylist1 = ft_lstnew(&a);
	mylist2 = ft_lstnew(&b);
	ft_lstadd_front(&mylist1, mylist2);
	mylist3 = ft_lstnew(&c);
	ft_lstadd_front(&mylist1, mylist3);

	t_list *ans = ft_lstlast(mylist1);
	printf("%i", *(int *)ans->content);
}*/