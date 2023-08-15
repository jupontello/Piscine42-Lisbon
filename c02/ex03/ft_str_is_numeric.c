/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:26:04 by julalvar          #+#    #+#             */
/*   Updated: 2023/08/08 17:36:27 by julalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0') 
	{
		return (1);
	}
	while (*str != '\0') 
	{
		if (*str < '0' || *str > '9')
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
    char str1[] = "18082023";
    char str2[] = "Hello world";
    char str3[] = "";

    printf("Resultado str1: %d\n", ft_str_is_numeric(str1));
    printf("Resultado str2: %d\n", ft_str_is_numeric(str2));
    printf("Resultado str3: %d\n", ft_str_is_numeric(str3));

    return (0);
}*/
