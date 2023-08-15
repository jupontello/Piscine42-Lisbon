/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:42:55 by julalvar          #+#    #+#             */
/*   Updated: 2023/08/12 16:43:09 by julalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int		main(void)
{
	printf("-6 = %d (0)\n", ft_iterative_factorial(-6));
	printf(" 0 = %d (1)\n", ft_iterative_factorial(0));
	printf(" 1 = %d (1)\n", ft_iterative_factorial(1));
	printf(" 2 = %d (2)\n", ft_iterative_factorial(2));
	printf(" 3 = %d (6)\n", ft_iterative_factorial(3));
	printf(" 4 = %d (24)\n", ft_iterative_factorial(4));
}
