/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:01:22 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/28 12:13:20 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i = -1;
	while (s1[++i] != '\0'&& s1[i] == s2[i]);
	if(s1[i] == s2[i])
		return 0;
	else
		return(s1[i] - s2[i]);
}	

int main()
{
    char str1[] = "abc";
    char str2[] = "abc";

    int result = ft_strcmp(str1, str2);

    if (result == 0)
    {
        printf("Strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("str1 is less than str2.\n");
    }
    else
    {
        printf("str1 is greater than str2.\n");
    }

    return 0;
}
	
