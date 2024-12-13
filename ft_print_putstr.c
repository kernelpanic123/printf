/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 23:18:37 by abtouait          #+#    #+#             */
/*   Updated: 2024/12/13 23:28:58 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_printf_putchar(str[i]);
		i++;	
	}
}
