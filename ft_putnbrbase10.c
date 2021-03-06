/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase10.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:55:57 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/27 18:42:00 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrbase10(int i)
{
	char	c;
	long	nb;
	int		j;

	j = 0;
	nb = i;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		j++;
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
		j++;
	}
	else
	{
		j += ft_putnbrbase10(nb / 10);
		j += ft_putnbrbase10(nb % 10);
	}
	return (j);
}
