/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:27:53 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/14 12:13:25 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
    char str[] = "Hello, this is an example string.";
    char to_find[] = "example";

    char *result = ft_strstr(str, to_find);

    if (result != NULL)
    {
        printf("Substring found at index %ld: %s\n", result - str, result);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return (0);
}*/
