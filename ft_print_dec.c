/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:11:44 by abtouait          #+#    #+#             */
/*   Updated: 2024/12/14 15:36:01 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_length(int a)
{
	int	i;

	i = 0;
	if (a == 0)
		return (1);
	if (a < 0)
	{
		a = -a;
		i++;
	}
	while (a > 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

int ft_print_dec(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if (nb > 9)
	{
		ft_print_dec(nb / 10);
	}
	ft_printf_putchar(nb % 10 + '0');
	return (ft_length(nb));
	
}