/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:40:21 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/28 20:56:55 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{	

	if(ac==3)
	{
	int ascii[128];
	int i = -1;
	while(++i<128)
		ascii[i] = 0;
	i= -1;
	while(av[1][++i] != '\0')
	{
		if(ascii[(int)av[1][i]] == 0)
		{
		write(1,&av[1][i],1);
		ascii[(int)av[1][i]] = 1;
		}
	}
	i = -1;
        while(av[2][++i] != '\0')
        {
                if(ascii[(int)av[2][i]] == 0)
                {
                write(1,&av[2][i],1);
                ascii[(int)av[2][i]] = 1;
                }
        }
	}
	write(1,"\n",1);
}

			

