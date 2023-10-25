/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:03:16 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/25 14:32:26 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;
	int		i;

	len = ft_strlen(src);
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	else
	{
		i = 0;
		while (i < len)
		{
			copy[i] = src[i];
			i++;
		}
		copy[len] = '\0';
	}
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	else
	{
		i = 0;
		while (i < ac)
		{
			tab[i].size = ft_strlen(av[i]);
			tab[i].str = av[i];
			tab[i].copy = ft_strdup(av[i]);
			i++;
		}
		tab[ac].str = 0;
		return (tab);
	}
}
/*
int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	int			i;
	int			j;

	tab = ft_strs_to_tab(argc, argv);
	if (tab)
	{
		i = 0;
		while (tab[i].str)
		{
			printf("String: %s\n", tab[i].str);
			printf("Size: %d\n", tab[i].size);
			printf("Copy: %s\n", tab[i].copy);
			i++;
		}
		j = 0;
		while (j < argc)
			free(tab[j++].copy);
		free(tab);
	}
	else
		return (NULL);
	return (0);
}*/
