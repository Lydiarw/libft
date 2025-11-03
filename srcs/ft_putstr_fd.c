#include "../libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return;
	i = 0;
	while (s[i] != '\0')
		i++;
	write(fd, s, i);
}

/*int main()
{
	char str[5] = "meow";
	ft_putstr_fd(str, 1);
}*/