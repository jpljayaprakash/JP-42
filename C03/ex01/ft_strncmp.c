/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:07:56 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/13 18:25:53 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
/*int main()
{
    char str1[] = "Hello";
    char str2[] = "Hell";

    int n = 4;  // Number of characters to compare

    int result = ft_strncmp(str1, str2, n);

    if (result == 0)
    {
        printf("The first %d characters of the strings are equal.\n", n);
    }
    else if (result < 0)
    {
        printf("The first %d characters of str1 are less than str2.\n", n);
    }
    else
    {
        printf("The first %d characters of str1 are greater than str2.\n", n);
    }

    return 0;
}*/
