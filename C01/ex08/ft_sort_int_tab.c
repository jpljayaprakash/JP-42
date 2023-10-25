/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:30:45 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/21 13:43:19 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	b = 1;
	while (b != 0)
	{
		b = 0;
		c = 1;
		while (c < size)
		{
			if (tab[c - 1] > tab [c])
			{
				a = tab[c - 1];
				tab[c - 1] = tab [c];
				tab [c] = a;
				b = 1;
			}
			c++;
		}
	}
}
int	main(void)
{
	int	ar[5] = {4, 2, 1, 3, 5};

	ft_sort_int_tab(ar, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", ar[i]);
	}
}
