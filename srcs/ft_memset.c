#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return ((void *)str);
}

/*int main()
{
	int c = 'a';
	size_t len = 4;
	void *str;

	printf("%s\n", (char *)ft_memset(str, c, len));
}*/