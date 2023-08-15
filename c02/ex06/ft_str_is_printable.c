/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:23:10 by julalvar          #+#    #+#             */
/*   Updated: 2023/08/07 13:59:21 by julalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
    char str2[] = "B	Y	E	";
    char str3[] = "";

    printf("Resultado str1: %d\n", ft_str_is_printable(str1));
    printf("Resultado str2: %d\n", ft_str_is_printable(str2));
    printf("Resultado str3: %d\n", ft_str_is_printable(str3));

    return (0);
}*/
