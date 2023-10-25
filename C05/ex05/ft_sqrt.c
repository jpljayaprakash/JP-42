/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:40:28 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/19 20:50:42 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb > 0)
	{
		while (sqrt * sqrt <= nb)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			if (sqrt > 46340)
				return (0);
			sqrt++;
		}
	}
	return (0);
}
/*int	main(void)
{
	int	number;
	int	result;

	number = 16;
	result = ft_sqrt(number);
	if (result == 0)
	{
		printf("The square root of %d is an irrational number or undefined.\n",
			number);
	}
	else
	{
		printf("The square root of %d is %d.\n", number, result);
	}
	return (0);
}*/
