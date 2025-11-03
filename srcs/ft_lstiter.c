#include "../libft.h"

/*void capitalize(void *any)
{
	char	*str;

	str = (char *)any;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
}*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*int main()
{
	char str1[6] = "hello";
	char str2[6] = "fanxu";
	char str3[5] = "hank";
	t_list *n1 = ft_lstnew(str1);
	t_list *n2 = ft_lstnew(str2);
	t_list *n3 = ft_lstnew(str3);

	ft_lstadd_back(&n1, n2);
	ft_lstadd_back(&n1, n3);

	printf("Before: %s\n", (char *)n1->content);
	printf("Before: %s\n", (char *)n1->next->content);
	printf("Before: %s\n", (char *)n1->next->next->content);

	ft_lstiter(n1, capitalize);

	printf("After: %s\n", (char *)n1->content);
	printf("After: %s\n", (char *)n1->next->content);
	printf("After: %s\n", (char *)n1->next->next->content);
}*/