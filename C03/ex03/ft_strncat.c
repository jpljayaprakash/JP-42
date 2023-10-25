/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:27:07 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/13 19:39:07 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (nb < 1)
	{
		return (dest);
	}
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main() {
    char dest[50] = "Hello ";
    char src[] = "World!";
    unsigned int nb = 4;  // Number of characters to concatenate

    printf("Before concatenation:\n");
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);

    ft_strncat(dest, src, nb);

    printf("\nAfter concatenation (first %u characters):\n", nb);
    printf("dest: %s\n", dest);

    return 0;
}*/
