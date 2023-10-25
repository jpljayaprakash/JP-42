/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:35:08 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/20 19:01:21 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = get_len(dest);
	src_len = get_len(src);
	if (size <= dest_len || size == 0)
		return (src_len + size);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && j < size - 1 - dest_len)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>
#include <bsd/string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[7] = "1337";
	char src[] = "Born to code";
	char dest2[7] = "1337";
        char src2[] = "Born to code";
	unsigned int size;
	unsigned int a;

	size = 9;
	a = 0;

	printf("Before concatenation:\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	a = ft_strlcat(dest, src, size);
	printf("\nReturn length: %u\n", a);
	printf("dest: %s\n", dest);
	a = strlcat(dest2, src2, size);
	printf("\nReturn length original: %u\n", a);
        printf("dest: %s\n", dest2);

	return 0;
}
