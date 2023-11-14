/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:25:33 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/27 15:53:49 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>



int main(int ac, char **av)
{
	
	int i = 0;
	int count = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			int j = -1;
			count = av[1][i] - 96;
			while (++j<count)
				write(1, &av[1][i],1);
		}
                else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                {
                        int j = -1; 
                        count = av[1][i] - 64; 
                        while (++j<count)
                                write(1, &av[1][i],1);
                }
		else
			write(1, &av[1][i],1);
		i++;
		}
	//	write(1, "\n",1);
	}
	write(1, "\n",1);
}

			

