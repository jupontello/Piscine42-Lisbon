/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:33:49 by julalvar          #+#    #+#             */
/*   Updated: 2023/08/08 13:13:33 by julalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0') 
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)) 
		{
			return (0); 
		}
		str++;
	}
	return (1);
}

/*int main() 
{
	char str1[] = "Hello";
	char str2[] = "World123";
	char str3[] = "";

	printf("Resultado str1: %d\n", ft_str_is_alpha(str1));
	printf("Resultado str2: %d\n", ft_str_is_alpha(str2));
	printf("Resultado str3: %d\n", ft_str_is_alpha(str3));

	return (0);
}*/
