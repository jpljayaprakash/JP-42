/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:01:56 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/27 15:13:56 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{
	int i = -1;
	while(s2[++i] != '\0')
		s1[i] = s2[i];
	s1[i] = '\0';
	return s1;
}

int main()
{	
	char s1[] = "jaya" ;
	char *s2 = "prakash";
	printf("%s", ft_strcpy(s1, s2));
	return 0;
}

