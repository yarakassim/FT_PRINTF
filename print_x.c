/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:40:48 by ykassim-          #+#    #+#             */
/*   Updated: 2021/09/18 15:16:01 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_xmin(t_tools *play)
{
	unsigned long	hex;

	hex = va_arg(play->args, unsigned long);
	play->base = HEX_MIN;
	ft_putnbr_unsigned(hex, play);
}

void	print_xmaj(t_tools *play)
{
	unsigned long	mal;

	mal = va_arg(play->args, unsigned long);
	play->base = HEX_MAJ;
	ft_putnbr_unsigned(mal, play);
}
