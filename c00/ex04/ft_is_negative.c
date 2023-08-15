/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julalvar <julalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:30:44 by julalvar          #+#    #+#             */
/*   Updated: 2023/07/27 19:43:04 by julalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	p;

	p = '0';
	if (n < 0)
	{
		p = 'N';
	}
	else
	{
		p = 'P';
	}
	{
		write (1, &p, 1);
	}
}

/*int     main()
{
	ft_is_negative(0);
	return (0);
}*/
