/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:50:29 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/27 14:53:32 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
int i =-1;
	while(str[++i] != '\0')
		write(1, &str[i],1);
}

int main()
{
 char *p= "jaya";
	ft_putstr(p);
return 0;
}
