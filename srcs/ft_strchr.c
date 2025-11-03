#include "../libft.h"

char	*ft_strchr(const char *str, int c)
{
	char *res;

	res = (char *)str;
	while (*res)
	{
		if (*res == (unsigned char)c)
			return (&*res);
		res++;		
	}
	if (*res == '\0' && (unsigned char)c == '\0')
		return (res);
	return (NULL);
}

/*int main()
{
	char str[16] = "Yellow Bellow!";
	int c = 'o';
	int d = 'a';

	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", ft_strchr(str, d));
}*/