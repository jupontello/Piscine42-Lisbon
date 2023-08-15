/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:48:32 by julalvar          #+#    #+#             */
/*   Updated: 2023/08/07 11:56:10 by julalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0') 
	{
		return (1);
	}
	while (*str != '\0') 
	{
		if (*str < 'a' || *str > 'z') 
		{
			return (0); 
		}
		str++;
	}
	return (1); 
}
/*int	main() 
{
 	char str1[] = "hello";
	char str2[] = "BYE";
	char str3[] = "";

	printf("Resultado str1: %d\n", ft_str_is_lowercase(str1));
	printf("Resultado str2: %d\n", ft_str_is_lowercase(str2));
	printf("Resultado str3: %d\n", ft_str_is_lowercase(str3));

	return (0);
}*/
