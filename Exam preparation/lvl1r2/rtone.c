/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtone.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:51:46 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/27 18:54:09 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
        int i = -1; 
        if (ac == 2)
        {
        while (av[1][++i] != '\0')
        {
        if ((av[1][i] >= 'a'&& av[1][i] <= 'y') || (av[1][i] >= 'A'&& av[1][i] <= 'y'))
                av[1][i] +=1;
        else if (( av[1][i] == 'z') || (av[1][i] == 'Z'))
                av[1][i] -=25;
        }
        i=-1;
        while(av[1][++i])
                write(1,&av[1][i],1);
        }
        write(1,"\n",1);
}

