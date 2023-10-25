/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:36:42 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/18 13:47:12 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	i = nb;
	i = i - 1;
	while (i >= 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/* int	main(void)
{
	int a = 5;
	printf("%d", ft_iterative_factorial(a));
	return (0);
} */