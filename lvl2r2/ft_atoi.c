/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:22:57 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/28 11:41:15 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = -1;
	int min = 0;
	int nbr = 0;
	while(str[++i] != '\0')
	{
	if(str[i] == '-')
		min++;
	else if(str[i] >= '0' && str[i] <= '9')
		nbr = (nbr*10) + (str[i] -'0');
	}
	if(min % 2 != 0)
		nbr = -nbr;
	return nbr;
}

int main()
{
	char *str = " ---+--+1234ab567";
	printf("%d",ft_atoi(str));
	return 0;
}
		
