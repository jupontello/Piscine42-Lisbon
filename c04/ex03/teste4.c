include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	signal;

	res = 0;
	i = 0;
	signal = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * signal);
}

int	main(void)
{
	char str[] = " \n---+--+1234ab567";
	int	value = ft_atoi(str);
	
	printf("Resultado:%d\n", value);
	return (0);
}

