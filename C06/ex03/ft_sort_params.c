/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:28:20 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/20 15:28:04 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_cmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tv;

	i = 1;
	while (i < ac)
	{
		j = i;
		while ((str_cmp(av[j], av[j - 1])) < 0 && j > 1)
		{
			tv = av[j -1];
			av[j - 1] = av[j];
			av[j] = tv;
			j--;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		print(av[i]);
		i++;
	}
	return (0);
}
