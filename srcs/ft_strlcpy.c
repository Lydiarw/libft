#include "../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t i;

	i = 0;
	if (destsize > 0)
	{
		while (i < destsize - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*int main()
{
	char dest[6];
	char src[] = "hello";

	printf("%zu\n", ft_strlcpy(dest, src, 1));
}*/