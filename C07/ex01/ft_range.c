/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:38:05 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/21 20:08:05 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*result;
	int	i;

	min = 5;
	max = 10;
	result = ft_range(min, max);
	if (result)
	{
		for (i = 0; i < (max - min); i++)
		{
			printf("%d ", result[i]);
		}
		free(result);
	}
	else
	{
		printf("Invalid input: min is greater than or equal to max.\n");
	}
	return (0);
} */
