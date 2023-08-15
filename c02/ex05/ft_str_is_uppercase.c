/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:03:12 by julalvar          #+#    #+#             */
/*   Updated: 2023/08/07 12:10:12 by julalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0') 
	{
		if (*str < 65 || *str > 90)
		{
			return (0); 
		}
		str++;
	}
	return (1); 
}
/*
int	main() 
{
    char	str1[] = "hello";
    char	str2[] = "BYE";
    char	str3[] = "";

    printf("Resultado str1: %d\n", ft_str_is_uppercase(str1));
    printf("Resultado str2: %d\n", ft_str_is_uppercase(str2));
    printf("Resultado str3: %d\n", ft_str_is_uppercase(str3));

    return (0);
}*/
