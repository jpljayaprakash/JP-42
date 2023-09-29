/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:29:18 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/28 12:50:24 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i = -1;

	if (n == 0)
		return 0;
	while (s1[++i] != '\0' && s1[i] == s2[i] && i < n-1);
	if (s1[i] == s2[i])
		return 0;
	else
		return (s1[i] - s2[i]);
}

int main()
{
	char *s1 = "abcd";
	char *s2 = "abcdef";

	printf("%d", ft_strncmp(s1, s2,5));
	return 0;
}

