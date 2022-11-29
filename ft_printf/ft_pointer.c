/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:17:40 by maricard          #+#    #+#             */
/*   Updated: 2022/11/29 18:50:36 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_pointer(unsigned long long k, int len)
{
	if (k >= 16)
	{
		ft_print_pointer(k / 16, len);
		ft_print_pointer(k % 16, len);
	}
	else
	{
		if (k < 10)
		{
			len++;
			ft_putchar(k + '0');
		}
		else
		{
			len++;
			ft_putchar(k - 10 + 'a');
		}
	}
	return (len);
}

int	ft_pointer(unsigned long long k)
{
	int	len;

	len = 0;
	if (!k)
		return (ft_string("(nil)"));
	len = 0;
	len = len + write(1, "0x", 2);
	ft_print_pointer(k, len);
	return (len);
}
