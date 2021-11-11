/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:36:27 by ykassim-          #+#    #+#             */
/*   Updated: 2021/11/11 11:55:50 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	t_tools	play;

	play.index = 0;
	va_start(play.args, str);
	parse_away(str, &play);
	va_end(play.args);
	return (play.index);
}
