/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:20:14 by abtouait          #+#    #+#             */
/*   Updated: 2024/12/14 16:12:17 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>

int		ft_printf_putchar(char  a);
int		ft_print_putstr(char *str);
int		ft_print_dec(int nb);
int		ft_print_unsigned(unsigned int c);

#endif
