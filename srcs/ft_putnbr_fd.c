#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	a;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	a = (n % 10) + '0';
	write(fd, &a, 1);
}

/*int	main(void)
{
	ft_putnbr_fd(345, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	ft_putnbr_fd(-98, 1);
}*/