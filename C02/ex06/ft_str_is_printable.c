/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:05:36 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/12 20:40:40 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*int main() {
    char str1[] = "HelloWorld123";  
    char str2[] = "12345";       
    char str3[] = "Hello\nWorld!";    
    char str4[] = "";
    printf("String 1: %s is printable? %d\n", str1, ft_str_is_printable(str1));
    printf("String 2: %s is printable? %d\n", str2, ft_str_is_printable(str2));
    printf("String 3: %s is printable? %d\n", str3, ft_str_is_printable(str3));
    printf("String 4: %s is printable? %d\n", str4, ft_str_is_printable(str4));
    return 0;
}*/
