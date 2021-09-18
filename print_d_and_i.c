/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:44:06 by ykassim-          #+#    #+#             */
/*   Updated: 2021/09/18 15:15:10 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_d_and_i(t_tools *play)
{
	int	num;

	num = va_arg(play->args, int);
	play->base = DEC;
	ft_putnbr_base(num, play);
}
