/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:45:31 by ykassim-          #+#    #+#             */
/*   Updated: 2021/09/18 15:15:28 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_s(t_tools *play)
{
	char	*str;

	str = va_arg(play->args, char *);
	if (!str)
		ft_putstr("(null)", play);
	else
		ft_putstr(str, play);
}
