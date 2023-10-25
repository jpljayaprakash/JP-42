/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:00:02 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/12 20:38:17 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*int main() {
    char str1[] = "HelloWorld";  
    char str2[] = "12345";       
    char str3[] = "HELLO";    
    char str4[] = "";
    printf("String 1: %s is upper? %d\n", str1, ft_str_is_uppercase(str1));
    printf("String 2: %s is upper? %d\n", str2, ft_str_is_uppercase(str2));
    printf("String 3: %s is upper? %d\n", str3, ft_str_is_uppercase(str3));
    printf("String 4: %s is upper? %d\n", str4, ft_str_is_uppercase(str4));
    return 0;
}*/
