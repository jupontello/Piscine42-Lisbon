//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	mult;
	int	nb;

	i = 0;
	nb = 0;
	mult = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= mult;
	return (nb);
}

/*int	main()
{
	char	*s = " ---+--+1234ab567";
	
	printf("%d\n", ft_atoi(s));
	return (0);
}*/
