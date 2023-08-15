/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:32:45 by julalvar          #+#    #+#             */
/*   Updated: 2023/08/07 14:44:04 by julalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] -= 97 - 65;
		i++;
	}
	return (str);
}

/*int	main() 
{
    char str[] = "Bom dia!";

    printf("Antes: %s\n", str);
    ft_strupcase(str);
    printf("Depois: %s\n", str);

    return 0;
}*/
