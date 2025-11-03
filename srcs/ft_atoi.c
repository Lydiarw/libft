#include "../libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	isNeg;
	int	ans;

	i = 0;
	isNeg = 1;
	ans = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			isNeg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans *= 10;
		ans += str[i] - '0';
		i++;
	}
	return (isNeg * ans);
}

/*int	main(void)
{
	char str[] = "  +123";
	char str1[] = "-567";
	char str2[] = "-+567";
	char str3[] = "--1";
	printf("%i\n", ft_atoi(str));
	printf("%i\n", ft_atoi(str1));
	printf("%i\n", ft_atoi(str2));
	printf("%i\n", ft_atoi(str3));
}*/