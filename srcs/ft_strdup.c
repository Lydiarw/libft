#include "../libft.h"

char	*ft_strdup(char *str)
{
	char	*res;
	int		i;

	res = (char *)malloc(ft_strlen(str) + 1 * sizeof(char));
	i = 0;
	if (!res)
		return (NULL);
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*int main()
{
	char str[18] = "Mengo is a bumbum";
	printf("%s\n", ft_strdup(str));
}*/