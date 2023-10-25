/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:46:54 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/20 21:24:59 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size < 1 || dest == NULL)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
int main() {
    char src[] = "Hello, World!";
    char dest[5];

    unsigned int copied_length = ft_strlcpy(dest, src, 1); //20 is size of dest

    printf("Copied Length: %u\n", copied_length);
    printf("Destination String: %s\n", dest);

    return 0;
}*/
