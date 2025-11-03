#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *destin;
	const char *source;
	size_t i;

	if (!dest && !src)
		return (NULL);
	source = src;
	destin = (char *)dest;
	i = 0;
	while (i < n)
	{
		destin[i] = source[i];
		i++;
	}
	return ((void *)destin);
}

/*int main()
{
	// char *dest = (char *)malloc(8 * sizeof(char));
	// char src[] = "meowwif";

	printf("%s\n", (char *)ft_memcpy(NULL, NULL, 6));
}*/