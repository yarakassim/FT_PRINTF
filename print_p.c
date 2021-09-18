/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:43:19 by ykassim-          #+#    #+#             */
/*   Updated: 2021/09/18 15:15:19 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_p(t_tools *play)
{
	void	*ptr;

	ptr = va_arg(play->args, void *);
	if (!ptr)
		ft_putstr("0x0", play);
	else
	{
		ft_putstr("0x", play);
		play->base = HEX_MIN;
		ft_putnbr_pointer((unsigned long)ptr, play);
	}
}
