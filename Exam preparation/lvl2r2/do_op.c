/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:49:00 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/28 10:12:20 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
int i = -1;
if (ac == 4)
{
//while(av[1][i] != '\0')
//{
	int a,c,result = 0;
	char b;
	a = atoi(av[1]);
	b = av[2][0];
	c = atoi(av[3]);
	if (b == '+')
		result = a+c;
	else if(b == '-')
        	result = a-c;
        else if(b == '*')
        	result = a*c;
        else if(b == '/')
        	result = a/c;
	printf("%d",result);
}
//else
	write(1,"\n",1);
}
	
