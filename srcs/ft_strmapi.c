#include "../libft.h"

char	ft_wee(unsigned int n, char c)
{
	return (c + n);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	res = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*int	main(void)
{
	char str[30] = "Meow!";
	char *res = ft_strmapi(str, ft_wee);
	printf("%s\n", res);
}*/