#include "../libft.h"

int	ft_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	final_len;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	k = ft_strlen(s1) - 1;
	while (ft_in_set(s1[i], set) == 1 && i < ft_strlen(s1) / 2)
		i++;
	while (ft_in_set(s1[k], set) == 1 && k > (ft_strlen(s1) / 2) - 1)
		k--;
	final_len = k - i + 2;
	res = (char *)malloc(final_len * sizeof(char));
	if (!res)
		return (NULL);
	k = 0;
	while (k < final_len - 1)
		res[k++] = s1[i++];
	res[k] = '\0';
	return (res);
}

/*int main()
{
	char s1[12] = "-++hello-+-";
	char set[3] = "+-";
	printf("1:  %s\n", ft_strtrim(s1, set));
	printf("2:  %s\n", ft_strtrim("", ""));
	printf("3:  %s\n", ft_strtrim("   xxxtripouille   xxx", " x"));
	printf("no.7:  %s\n", ft_strtrim("   xxx   xxx", " x"));
}*/