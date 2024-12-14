/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 23:18:37 by abtouait          #+#    #+#             */
/*   Updated: 2024/12/14 15:42:48 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_putstr(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	
	while (str[i] != '\0')
	{
		ft_printf_putchar(str[i]);
		i++;	
	}
	return (i);
}
