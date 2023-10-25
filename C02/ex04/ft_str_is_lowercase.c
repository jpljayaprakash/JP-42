/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:15:26 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/12 20:53:42 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*int main() {
    char str1[] = "HelloWorld";  
    char str2[] = "12345";    
    char str3[] = "hello";    
    char str4[] = "";
    printf("String 1: %s is lower? %d\n", str1, ft_str_is_lowercase(str1));
    printf("String 2: %s is lower? %d\n", str2, ft_str_is_lowercase(str2));
    printf("String 3: %s is lower? %d\n", str3, ft_str_is_lowercase(str3));
    printf("String 4: %s is lower? %d\n", str3, ft_str_is_lowercase(str4));

    return 0;
}*/
