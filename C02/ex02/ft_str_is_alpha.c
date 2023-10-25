/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:45:46 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/12 12:09:39 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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
    printf("String 1: %s is alphabetical? %d\n", str1, ft_str_is_alpha(str1));
    printf("String 2: %s is alphabetical? %d\n", str2, ft_str_is_alpha(str2));
    printf("String 3: %s is alphabetical? %d\n", str3, ft_str_is_alpha(str3));
    printf("String 4: %s is alphabetical? %d\n", str4, ft_str_is_alpha(str4));
    return 0;
}*/
