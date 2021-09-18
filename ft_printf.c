/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:36:27 by ykassim-          #+#    #+#             */
/*   Updated: 2021/09/17 16:30:26 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	t_tools	*play;
	int		ret;

	play = (t_tools *)malloc(sizeof(t_tools));
	if (!play)
		return (-1);
	play->index = 0;
	va_start(play->args, str);
	while (*str)
	{
		if (*str == '%')
		{
			if (check_flag(*str++))
				print_arg(*str, play);
			else
			{
				ft_putchar('%', play);
				ft_putchar(*str, play);
			}
		}
		else
			ft_putchar(*str, play);
		str++;
	}
	va_end(play->args);
	ret = play->index;
	free(play);
	return (ret);
}
