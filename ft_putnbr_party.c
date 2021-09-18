/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_party.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:24:00 by ykassim-          #+#    #+#             */
/*   Updated: 2021/09/17 16:52:13 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*regular putnbr base*/
void	ft_putnbr_base(int nbr, t_tools *play)
{
	static int	size;
	int			n;

	size = ft_strlen(play->base);
	n = nbr;
	if (ft_strncmp(play->base, DEC, 10))
	{
		if (n == -2147483648)
		{
			ft_putstr("-2", play);
			n = 147483648;
		}
	}
	if (n < 0)
	{
		ft_putchar(45, play);
		n = -n;
	}
	if (n >= (int)size)
		ft_putnbr_base(n / size, play);
	ft_putchar(play->base[n % size], play);
}

/*putnbr for pointers*/
void	ft_putnbr_pointer(unsigned long nbr, t_tools *play)
{
	static int		size;
	unsigned long	n;

	size = ft_strlen(play->base);
	n = nbr;
	if (n >= (unsigned long)size)
		ft_putnbr_pointer(n / size, play);
	ft_putchar(play->base[n % size], play);
}

/*putnbr for unsigned int*/
void	ft_putnbr_unsigned(unsigned int nbr, t_tools *play)
{
	static int		size;
	unsigned int	n;

	size = ft_strlen(play->base);
	n = nbr;
	if (n >= (unsigned int)size)
		ft_putnbr_unsigned(n / size, play);
	ft_putchar(play->base[n % size], play);
}
