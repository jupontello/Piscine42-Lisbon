/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:26:37 by julalvar          #+#    #+#             */
/*   Updated: 2023/08/12 12:13:14 by julalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	str1[] = "porta";
	char	str2[] = "poste";
	int	result;
	unsigned int	n;

	n = 5;
	result = ft_strncmp(str1, str2, n);
	printf("%d\n", result);
	return (0);
}*/
