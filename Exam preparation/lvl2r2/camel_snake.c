/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_snake.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:46:40 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/27 21:38:17 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int ac, char **av)
{
	int i = -1;
	char c[100];
	int j = -1;
	
	if( ac == 2)
	{
	while(av[1][++i] !='\0')
	{
		if (av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			write(1, "_", 1);
			av[1][i] = av[1][i] + 32;
		}
		write(1,&av[1][i],1);
	}
//	j = -1;
//	while(c[++j] != '\0')
//		write(1, &c[j],1);
	}
	write(1, "\n",1);
}
