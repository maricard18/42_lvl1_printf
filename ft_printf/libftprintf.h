/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 08:30:14 by maricard          #+#    #+#             */
/*   Updated: 2022/11/28 16:25:53 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

//C libraries
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

//Funcrion Prototypes
int		ft_printf(const char *str, ...);
int		ft_char(char c);
int		ft_number(int x);
int		ft_string(char *str);
void	ft_putchar(char c);
size_t	ft_strlen(const char *str);


#endif
