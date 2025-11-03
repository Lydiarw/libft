#include "../libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (n < 1)
		return (0);
	i = 0;
	while ((str1[i] || str2[i]) && str1[i] == str2[i] && i < n - 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

/*int main()
{
	char str1[5] = "";
	char str2[7] = "1";

	printf("ans: %i\n", ft_strncmp(str1, str2, 0));
}*/