/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:06:49 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/28 21:18:28 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = -1;
	int j = -1;
	int k ;
	while(av[2][++i]);
	while(av[3][++j]);
	if (ac ==4 && i == 1 && j == 1)
	{
	k = -1;
	while (av[1][++k])
	{
	if(av[1][k] == av[2][0])
		av[1][k] = av[3][0];
	}
	write(1,av[1],k);
	}
write(1,"\n",1);
}
