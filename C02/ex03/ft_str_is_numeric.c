/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:59:21 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/12 20:53:22 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*int main() {
    char str1[] = "HelloWorld";
    char str2[] = "12345";
    char str3[] = "Hello123";
    char str4[] = "";
    printf("String 1: %s is numeric? %d\n", str1, ft_str_is_numeric(str1));
    printf("String 2: %s is numeric? %d\n", str2, ft_str_is_numeric(str2));
    printf("String 3: %s is numeric? %d\n", str3, ft_str_is_numeric(str3));
    printf("String 4: %s is numeric? %d\n", str4, ft_str_is_numeric(str4));
    return 0;
}*/
