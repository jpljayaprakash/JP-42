/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:21:26 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/27 11:29:49 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
int i = 0;

if (ac == 2)
{
while (av[1][i] == ' ' ||av[1][i] == '\t')
	i++;
while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
{
	write(1, &av[1][i],1);
	i++;
}
}
write(1, "\n" , 1);
}