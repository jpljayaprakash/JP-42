/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:45:24 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/28 14:59:59 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t count = 1;
	int i = -1, j = -1;
	while (s[++i] != '\0')
	{
	while(reject[++j] != '\0')
	{
		if(s[i] == reject[j])
			return count;
	}
	count++;
	}
	return count;
} 
	

int main() {
    const char *s = "Hello, World!";
    const char *reject = " l,!";

    size_t result = ft_strcspn(s, reject);

    printf("Length of initial segment without characters from 'reject': %zu\n", result);

    return 0;
}

