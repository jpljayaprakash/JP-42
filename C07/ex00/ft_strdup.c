/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:52:12 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/21 12:36:01 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dup = malloc(sizeof(char) * src_len + 1);
	if (!dup)
		return (NULL);
	src_len = 0;
	while (src[src_len])
	{
		dup[src_len] = src[src_len];
		src_len++;
	}
	dup[src_len] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char	*ar;

	ar = "abcdef";
	printf("%s", ft_strdup(ar));
	return (0);
}*/
