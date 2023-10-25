/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:55:55 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/24 13:27:18 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strstr(char **str_array, int array_l, char *to_find)
{
	int	str_i;
	int	find_i;
	int	index;

	str_i = 0;
	index = 0;
	find_i = 0;
	while (str_i < array_l)
	{
		while (to_find[find_i] && (to_find[find_i] == str_array[str_i][index]))
		{
			find_i++;
			index++;
			if (str_array[str_i][index] == ':' && to_find[find_i] == '\0')
			{
				return (str_array[str_i]);
			}
		}
		str_i++;
		find_i = 0;
		index = 0;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] || s2[index])
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;

	src_len = ft_strlen(src);
	dest = (char *)malloc(src_len * sizeof(char) + 1);
	if (dest == NULL)
	{
		return (0);
	}
	ft_strcpy(dest, src);
	return (dest);
}
