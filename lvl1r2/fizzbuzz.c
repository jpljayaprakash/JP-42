/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:33:10 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/27 14:45:39 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(int i)
{
	char j;
if (i <= 9)
{
	j = i + '0';	
	write(1, &j, 1);
}
else
	{
		print(i/10);
		print(i%10);
	}
}

int main(void)
{
 int i = 1 ;

 while(i <= 100)
{
if (((i % 3) == 0) && ((i % 5) == 0))
	write(1, "fizzbuzz", 9);
else if ((i % 3) == 0)
	write(1, "fizz", 5);
else if ((i % 5) == 0)
	write(1, "buzz", 5);
else
	print(i);
write(1, "\n", 1);
i++;
}
return 0;
}

