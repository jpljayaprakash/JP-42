/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:44:01 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/19 20:59:23 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 0;
	if (nb < 2)
		return (0);
	if (nb == i)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			prime++;
		i++;
	}
	if (prime == 0)
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	int number;

	printf("Enter an integer: ");
	scanf("%d", &number);

	if (ft_is_prime(number))
	{
		printf("%d is a prime number.\n", number);
	}
	else
	{
		printf("%d is not a prime number.\n", number);
	}

	return (0);
}*/