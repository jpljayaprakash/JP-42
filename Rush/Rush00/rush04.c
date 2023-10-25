/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:12:37 by pyerima           #+#    #+#             */
/*   Updated: 2023/09/10 19:05:34 by rtonar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw_line(int num,	char a,	char b,	char c)
{
	int	j;

	j = 1;
	if (num == 1)
	{
		ft_putchar(a);
	}
	while (j < num)
	{
		if (j <= 1)
			ft_putchar (a);
		else
		{
			ft_putchar(b);
		}
		j++;
	}
	if (num != 1)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x,	int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			draw_line(x, 'A', 'B', 'C');
		else
		{
			if (i == y -1)
				draw_line(x, 'C', 'B', 'A');
			else
				draw_line(x, 'B', ' ', 'B');
		}
		i++;
	}
}
