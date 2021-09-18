/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:23:11 by ykassim-          #+#    #+#             */
/*   Updated: 2021/09/18 16:45:48 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# define DEC "0123456789"
# define HEX_MAJ "0123456789ABCDEF"
# define HEX_MIN "0123456789abcdef"

typedef struct s_tools
{
	va_list	args;
	int		index;
	char	*base;
}			t_tools;

int		check_flag(char flag_c);
int		ft_printf(const char *str, ...);
int		ft_strlen(char *str);
int		ft_strcmp(const char *s1, const char *s2);
void	parse_away(const char *str, t_tools *play);
void	print_arg(char flag_c, t_tools *play);
void	ft_putnbr_base(int n, t_tools *play);
void	ft_putnbr_unsigned(unsigned int n, t_tools *play);
void	ft_putnbr_pointer(unsigned long n, t_tools *play);
void	ft_putchar(char c, t_tools *play);
void	ft_putstr(char *s, t_tools *play);
void	print_c(t_tools *play);
void	print_s(t_tools *play);
void	print_p(t_tools *play);
void	print_d_and_i(t_tools *play);
void	print_u(t_tools *play);
void	print_xmin(t_tools *play);
void	print_xmaj(t_tools *play);

#endif
