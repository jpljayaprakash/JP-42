/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:08:43 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/21 15:59:47 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *result;
	int min = 20;

	int size = ft_ultimate_range(&result, min, max);

	if (result)
	{
		printf("Range: ");
		for (int i = 0; i < size; i++)
		{
			printf("%d ", result[i]);
		}
		printf("\n%d", size);

		free(result);
	}
	else if (size == -1)
	{
		printf("Memory allocation error.\n");
	}
	else
	{
		printf("Invalid input: min is greater than or equal to max.\n");
	}

	return (0);
} */