#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	long	nbr;
	int		i;
	char	c[11];

	nbr = nb;
	if (nbr == 0)
		ft_putchar('0');
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	i = 0;
	while (nbr > 0)
	{
		c[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}

int	main(void)
{
	ft_putnbr(42);
	return (0);
}
