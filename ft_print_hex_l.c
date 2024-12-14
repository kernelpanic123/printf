/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_l.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 16:20:42 by abtouait          #+#    #+#             */
/*   Updated: 2024/12/14 16:39:03 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  ft_length_hex(int c)
{
    size_t  i;

    i = 0;
    if (c == 0)
        return (1);
    while (c > 0)
    {
        c = c / 16;
        i++;
    }
    return i;
}
int ft_print_hex_l(unsigned int a)
{
    if (a <= 9)
        ft_print_unsigned(a);
        
}