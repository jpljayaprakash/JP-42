/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:06:04 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/28 15:17:27 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int i = -1;
	char *dup;
	
	while(src[++i] != '\0');
	if(!(dup = (char*) malloc((i+1)*sizeof(int))))
		return NULL;
	i = -1;
	while(src[++i] != '\0')
		dup[i] = src[i];
	dup[i] = '\0';
	return dup;
}

int main()
{
	char *a = "Jayaprakash";
	
	printf("%s", ft_strdup(a));
	return 0;
}
		
