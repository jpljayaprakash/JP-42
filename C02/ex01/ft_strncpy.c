/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:16:18 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/13 11:44:40 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest_1;

	dest_1 = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest_1);
}
/* int  main(void)
 {
  char    src [] = "Good luck";
  char    dest[30];
  ft_strncpy(dest, src, 15);
  printf("Copied line: %s\n", dest);
  return (0);
 }*/
