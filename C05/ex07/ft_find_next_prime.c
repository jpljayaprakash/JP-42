/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:00:29 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/19 21:02:39 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i < 2)
		return (2);
	while (!ft_is_prime(i))
		i++;
	return (i);
}
/*
int	main(void) {
	int number;

	printf("Enter an integer: ");
	scanf("%d", &number);

	if (number < 2) {
		printf("The next prime number greater than or equal to 2 is 2.\n");
	} else {
		int next_prime = ft_find_next_prime(number);
		printf("The next prime number greater than or equal to %d is %d.\n",
			number, next_prime);
	}

	return (0);
} */