#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t	i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
	char str[] = "abcdef";
	int c = 'b';
	int n = 5;

	printf("Ans: %s\n", (char *)ft_memchr(str, c, n));
}*/