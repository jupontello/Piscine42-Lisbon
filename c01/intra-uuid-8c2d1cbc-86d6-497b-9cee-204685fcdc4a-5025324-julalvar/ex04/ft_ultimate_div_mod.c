/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:30:12 by julalvar          #+#    #+#             */
/*   Updated: 2023/08/02 17:47:48 by julalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int	main(void)

{
	int	a;
	int	b;

	a = 45;
	b = 2;
	printf("%d | %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d | %d\n", a, b);
	return (0);
}*/
