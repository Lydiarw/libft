#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*int main()
{
	void *str;
	size_t n = 4;
	str = malloc(sizeof(char) * n);

	ft_bzero(str, n);
	printf("%s\n", (char *)str);
}*/