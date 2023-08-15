/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:40:21 by julalvar          #+#    #+#             */
/*   Updated: 2023/08/12 16:10:30 by julalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str++;
		write(1, &c, 1);
	}
}

int	main(void)
{
	char	str[] = "luz";
	ft_putstr(str);
	return(0);
}
