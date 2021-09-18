/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:23:50 by ykassim-          #+#    #+#             */
/*   Updated: 2021/09/18 15:14:48 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_arg(char flag_c, t_tools *play)
{
	char	*data_type;

	data_type = "cspdiuxX%\0";
	if (flag_c == data_type[0])
		print_c(play);
	if (flag_c == data_type[1])
		print_s(play);
	if (flag_c == data_type[2])
		print_p(play);
	if (flag_c == data_type[3] || flag_c == data_type[4])
		print_d_and_i(play);
	if (flag_c == data_type[5])
		print_u(play);
	if (flag_c == data_type[6])
		print_xmin(play);
	if (flag_c == data_type[7])
		print_xmaj(play);
	if (flag_c == data_type[8])
		ft_putchar('%', play);
}
