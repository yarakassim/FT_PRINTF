/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:39:14 by ykassim-          #+#    #+#             */
/*   Updated: 2021/09/18 15:15:51 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_u(t_tools *play)
{
	unsigned int	uni;

	uni = va_arg(play->args, unsigned int);
	play->base = DEC;
	ft_putnbr_unsigned(uni, play);
}
