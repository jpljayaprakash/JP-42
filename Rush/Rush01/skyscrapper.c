/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlakshma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 23:19:38 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/17 23:19:43 by jlakshma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putnbr(int nb);
void ft_putchar(char c);
void ft_putstr(char *str);
int ft_strlen(char *str);
int *int_conversion(char *str);
int check(int ac, char **av);
int dup_check(int tab[4][4], int pos, int num);
int check_rules(int tab[4][4], int pos, int entry[16]);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void ft_putnbr(int nb)
{
    if (nb / 10 != 0)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int col_up(int tab[4][4], int pos, int entry[16])
{
    int i;
    int max;
    int count;

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

int col_down(int tab[4][4], int pos, int entry[16])
{
    int i;
    int max;
    int count;

    i = 4;
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

int row_right(int tab[4][4], int pos, int entry[16])
{
    int i;
    int max;
    int count;

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

int row_left(int tab[4][4], int pos, int entry[16])
{
    int i;
    int max;
    int count;

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

int check_rules(int tab[4][4], int pos, int entry[16])
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

int dup_check(int arr[4][4], int pos, int num)
{
    int i;

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

int key(int arr[4][4], int entry[16], int pos)
{
    int size;

    if (pos == 16)
        return (1);
    size = 1;
    while (size <= 4)
    {
        if (dup_check(arr, pos, size) == 0)
        {
            arr[pos / 4][pos % 4] = size;
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

void sky_scrapper(int tab[4][4])
{
    int i;
    int j;

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

int *int_conversion(char *str)
{
    int i;
    int *entry;
    int nbr;
    int num_count = 0;
    int space_count = 0;

    nbr = 0;
    entry = malloc(sizeof(int) * 16);
    if (!(entry))
    {
        write(1, "Memory allocation failed\n", 25);
        return (NULL);
    }
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            if (num_count == 0)
            {
                write(1, "Invalid input: No numbers found before a space\n", 49);
                free(entry);
                return (NULL);
            }
            space_count++;
            i++;
            continue;
        }
        if (str[i] >= '1' && str[i] <= '4')
        {
            if (num_count >= 16)
            {
                write(1, "Invalid input: Too many numbers provided\n", 43);
                free(entry);
                return (NULL);
            }
            entry[num_count] = str[i] - '0';
            num_count++;
        }
        else
        {
            write(1, "Invalid input: Allowed entries are 1 to 4 and space\n", 54);
            free(entry);
            return (NULL);
        }
        i++;
    }
    if (num_count != 16 || space_count != 15)
    {
        write(1, "Invalid input: The input must contain exactly 16 numbers separated by 15 spaces\n", 79);
        free(entry);
        return (NULL);
    }
    return (entry);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0')
    {
        write(1, "Empty string\n", 13);
        return (-1);
    }
    while (str[i] != '\0')
    {
        if ((str[i] >= '1' && str[i] <= '4') || (str[i] == ' '))
            i++;
        else
        {
            write(1, "Allowed entries: 1 to 4 and space\n", 36);
            return (-1);
        }
    }
    return (i);
}

int main(int ac, char **av)
{
    int arr[4][4];
    int *input;

    if (ac != 2)
    {
        write(1, "Error: Please provide a valid input\n", 37);
        return (1);
    }
    input = int_conversion(av[1]);
    if (input == NULL)
    {
        write(1, "Error: Invalid input\n", 21);
        return (1);
    }
    if (key(arr, input, 0) == 1)
        sky_scrapper(arr);
    else
        ft_putstr("Did not find any solutions\n");
    free(input);
    return (0);
}

