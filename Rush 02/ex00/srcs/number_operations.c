/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:52:56 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/24 13:19:32 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	ft_is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_module(char *str)
{
	int	module;

	if (ft_strlen(str) % 3 > 0)
		module = 1;
	else
		module = 0;
	return (module);
}

char	**ft_allocate(char *arg)
{
	int		arr_len;
	int		i;
	int		first_slot;
	char	**arr;

	i = 0;
	arr_len = ft_strlen(arg);
	first_slot = ft_module(arg);
	arr = (char **)malloc((arr_len / 3 + first_slot) * sizeof(char *));
	if (!arr)
		ft_puterror("Allocation Memory Error");
	while (i < (arr_len / 3) + first_slot)
	{
		arr[i] = (char *)malloc((3 + 1) * sizeof(char));
		if (arr[i] == NULL)
		{
			ft_puterror("Allocation Memory Error");
			return (0);
		}
		i++;
	}
	arr = ft_populate(arg, arr, arr_len, first_slot);
	return (arr);
}

char	**ft_populate(char *arg, char **arr, int arg_len, int first_slot)
{
	int	i;
	int	j;
	int	arg_i;

	arg_i = 0;
	i = 0;
	while (i < (arg_len / 3) + first_slot)
	{
		j = 0;
		while (1)
		{
			if (j == 3)
			{
				arr[i++][j] = '\0';
				break ;
			}
			if (i == 0 && j == 0 && (arg_len % 3 == 2))
				arr[i][j++] = '0';
			while (i == 0 && (arg_len % 3 == 1) && j <= 1)
				arr[i][j++] = '0';
			arr[i][j++] = arg[arg_i++];
		}
	}
	return (arr);
}

int	ft_read_words(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str[0])
		return (0);
	while (!(str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
			&& str[i] <= 'Z'))
	{
		i++;
	}
	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
