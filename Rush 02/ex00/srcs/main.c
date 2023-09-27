/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:28:22 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/24 10:53:07 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_puterror(char *err)
{
	while (*err != 0)
		write(2, err++, 1);
}

int	ft_error(int argc, char *str)
{
	if (argc != 2 && argc != 3)
	{
		ft_puterror("Error\n");
		return (0);
	}
	if (!(ft_is_number(str)))
	{
		ft_puterror("Error\n");
		return (0);
	}
	if (ft_strlen(str) > 37)
	{
		ft_puterror("Dict Error\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!(ft_error(argc, argv[1])))
			return (0);
		ft_engine("numbers.dict", argv[1]);
	}
	else if (argc == 3)
	{
		if (!(ft_error(argc, argv[2])))
			return (0);
		ft_engine(argv[1], argv[2]);
	}
	if (argc != 2 && argc != 3)
	{
		ft_puterror("Error\n");
		return (0);
	}
}
