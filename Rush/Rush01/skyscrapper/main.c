/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <jlakshma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:59:39 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/19 11:32:09 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr (int nb);
void	ft_putchar (char c);
void	ft_putstr (char *str);
int	ft_atoi (char *str);
int	ft_strlen (char *str);
int	*get_numbers (char *str);
int	check (int ac, char **av);
int	dup_check (int tab[4][4], int pos, int num);
int	check_rules (int tab[4][4], int pos, int entry[16]);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	col_up(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i++;
		}
		if (entry[pos % 4] != count)
			return (1);
	}
	return (0);
}

int	col_down(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i--;
		}
		if (entry[4 + pos % 4] != count)
			return (1);
	}
	return (0);
}

int	row_right(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 4;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				count++;
			}
		}
		if (entry[12 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	row_left(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				count++;
			}
			i++;
		}
		if (entry[8 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	check_rules(int tab[4][4], int pos, int entry[16])
{
	if (row_left(tab, pos, entry) == 1)
		return (1);
	if (row_right(tab, pos, entry) == 1)
		return (1);
	if (col_down(tab, pos, entry) == 1)
		return (1);
	if (col_up(tab, pos, entry) == 1)
		return (1);
	return (0);
}

int	dup_check(int arr[4][4], int pos, int num)
{
	int	i;

	i = 0;
	while (i < pos / 4)
	{
		if (arr[i][pos % 4] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < pos % 4)
	{
		if (arr[pos / 4][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	key(int arr[4][4], int entry[16], int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 1;
	while (size <= 4)
	{

		if (dup_check(arr, pos, size) == 0)
		{
			arr[pos / 4][pos % 4] = size;
		for (int x = 0; x < 4; x++)
		{
		for (int y = 0; y < 4; y++)
		{
			printf("%d ", arr[x][y]);
		}
		printf("\n");
		}
		printf("\n");
				if (check_rules(arr, pos, entry) == 0)
			{
				if (key(arr, entry, pos + 1) == 1)
					return (1);
			}
			else
				arr[pos / 4][pos % 4] = 0;
		}
		size++;
	}
	return (0);
}

void	sky_scrapper(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(tab[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	*int_conversion (char *str)
{
	int	i;
	int	*entry;
	int	nbr;

	nbr = 0;
	entry = malloc(sizeof(int) * 16);
	if (!(entry))
	{
		write (1, "Memory allocation failed", 24);
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		if (str[i] >= '1' && str[i] <= '4')
		{
			entry[nbr] = str[i] - '0';
			nbr++;
		}
		i++;
	}
	return (entry);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		write (1, "empty string", 12);
	while (str[i] != '\0')
	{
		if ((str[i] >= '1' && str[i] <= '4') || (str[i] == ' '))
			i++;
		else
			write(1, "Allowed entrys: 1 to 4 and space", 32);
	}
	return (i);
}

int	main(int ac, char **av)
{
	int	arr[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	int	*entry;

	if ((ac != 2) || ft_strlen(av[1]) != 31)
	{
		write (1, "Error give the correct entrys", 29);
		return (0);
	}
	entry = int_conversion (av[1]);
	if (key (arr, entry, 0) == 1)
		sky_scrapper(arr);
	else
		ft_putstr("Did not find any solutions\n");
	free(entry);
	return (0);
}
