/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:06:04 by julalvar          #+#    #+#             */
/*   Updated: 2023/08/12 14:58:39 by julalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	str[] = "Bom dia, boa tarde";
	char	to_find[] = "noite";

	char	*str_result = ft_strstr(str, to_find);

	if (str_result != NULL)
	{	
		printf("Find: %s\n", to_find);
	}
	else
	{
		printf("Nothing found");

	}
	return (0);
}*/
