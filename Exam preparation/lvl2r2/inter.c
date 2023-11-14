/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:10:16 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/28 17:34:03 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int ac, char **av)
{
	int i;

	if(ac == 3)
	{
	int ascii[128];
	i = -1;
	while(++i < 128)
		ascii[i] = 0;
	i = -1;
	while (av[1][++i])
	{
		if(ascii[(int)av[1][i]] == 0)
		{
		write(1, &av[1][i],1);
		ascii[(int)av[1][i]] = 1;
		}
	}
	}
	write(1,"\n",1);
}

