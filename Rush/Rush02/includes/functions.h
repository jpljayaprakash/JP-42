/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:02:21 by jlakshma          #+#    #+#             */
/*   Updated: 2023/09/24 10:50:13 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <unistd.h>

int		main(int argc, char **argv);
void	ft_puterror(char *err);
int		ft_error(int argc, char *str);

int		ft_strlen(char *str);
char	*ft_strstr(char **str_array, int array_l, char *to_find);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);

char	*ft_read_dict(char *dictionary);
int		ft_counter_rows(char *buf);
char	**ft_alloc_array(char *buf);
char	**ft_copy_dict_array(char *dictionary);

int		ft_is_number(char *str);
int		ft_module(char *str);
char	**ft_allocate(char *arg);
char	**ft_populate(char *arg, char **arr, int arg_len, int first_slot);
int		ft_read_words(char *str);

int		ft_engine(char *dictionary, char *str);
void	ft_engine_nest(char *digits, char **dictionary, int counter_rows);
void	ft_first_digit(char **array, char digit, int counter_rows);
void	ft_second_digit(char **array, char *digits, int counter_rows);
void	ft_third_digit(char **array, char digit, int counter_rows);
void	ft_ord(char **array, int counter_rows, int max, int i);

#endif
