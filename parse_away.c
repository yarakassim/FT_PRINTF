/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_away.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:17:24 by ykassim-          #+#    #+#             */
/*   Updated: 2021/09/18 16:35:13 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_away(const char *str, t_tools *play)
{
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
}
