/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:49:00 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/28 11:10:47 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void print(int nbr)
{
  char j;
if(nbr<0)
{
	write(1,"-",1);
	nbr = -nbr;
	print(nbr);
}
else if (nbr<10){
	j= nbr+'0';
	write(1,&j,1);}
 else{
	print(nbr/10);
	print(nbr%10);}
}
	
int main(int ac, char **av)
{
int i = -1,mincount=0;
int a = 0,c = 0;
char b;
int result =0;

if (ac == 4)
{
	while(av[1][++i] != '\0')
	{
	     if (av[1][i] == '-' ||av[1][i] == '+')
		{
		if (av[1][i] == '-')
			mincount = 1;
		}
	     else
		a = (a*10) + (av[1][i] - '0');
	}
	if (mincount == 1)
	  	a = -a;
	i = -1;
	while(av[3][++i] != '\0')
        {   
             if (av[3][i] == '-' ||av[3][i] == '+')
                {   
                if (av[3][i] == '-')
                        mincount = 1;
                }
             else
                c = (c*10) + (av[3][i] - '0');
        }
        if (mincount == 1)
                c = -c;
	b = av[2][0];
	if (b == '+')
		result = a+c;
	else if(b == '-')
        	result = a-c;
        else if(b == '*')
        	result = a*c;
        else if(b == '/')
        	result = a/c;
	print(result);
}
	write(1,"\n",1);
}
	
