/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:58:34 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/26 11:12:46 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*s_zero(void)
{
	char	*con_s;

	con_s = (char *)malloc(1);
	if (!con_s)
		return (NULL);
	con_s[0] = '\0';
	return (con_s);
}

int	len(char **strs, int size, char *sep)
{
	int	i;
	int	t_len;
	int	j;
	int	k;

	i = -1;
	t_len = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			t_len++;
		if (i < size - 1)
		{
			k = -1;
			while (sep[++k])
				t_len++;
		}
	}
	return (t_len);
}

char	*join(char **strs, int size, char *sep, int t_len)
{
	char	*con_s;
	int		i;
	int		j;
	int		k;

	con_s = (char *)malloc(sizeof(char) * (t_len + 1));
	if (!con_s)
		return (NULL);
	i = -1;
	t_len = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			con_s[t_len++] = strs[i][j];
		if (i < size - 1)
		{
			k = -1;
			while (sep[++k])
				con_s[t_len++] = sep[k];
		}
	}
	con_s[t_len] = '\0';
	return (con_s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	t_len;

	if (size == 0)
		return (s_zero());
	t_len = len(strs, size, sep);
	return (join(strs, size, sep, t_len));
}
/*
int	main(void)
{
	char	*strs[] = {"Apple", "Banana", "Cherry", "Date"};
	char	*sep;
	int		size;
	char	*result;

	sep = "   ";
	size = sizeof(strs) / sizeof(strs[0]);
	result = ft_strjoin(size, strs, sep);
	if (result != NULL)
	{
		printf("Concatenated String: %s\n", result);
		free(result);
	}
	else
		printf("Memory allocation failed.\n");
	return (0);
} */
