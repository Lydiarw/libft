#include "../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *last;

	last = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
			last = (char *)str;
		str++;
	}
	if (*str == '\0' && (unsigned char)c == '\0')
		return ((char *)str);
	return (last);
}

/*int main()
{
	char str[16] = "Yellow Bellow!";
	int c = 'o';

	printf("%s\n", ft_strrchr(str, c));
}*/