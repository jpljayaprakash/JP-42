/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:14:11 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/12 19:31:16 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			&& !(str [i - 1] >= '0' && str [i - 1] <= '9')
			&& !(str [i - 1] >= 'a' && str [i - 1] <= 'z'))
			str[i] = str[i] - 32;
		if ((str[i] >= 'A' && str[i] <= 'Z') && ((str[i - 1] >= 'A'
					&& str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*int main() {
    char str1[] = "salut, comment tu vas 
    ? 42mots quarante-deux; cinquante+et+un";
    printf("modified: %s \n", ft_strcapitalize(str1));

    return 0;
}*/
