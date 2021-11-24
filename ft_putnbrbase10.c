/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase10.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:55:57 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/24 16:04:59 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_h.h"

void	ft_putnbrbase10(int i)
{
	long nb;
	nb = i;
	char c;
	if (nb < 0)
	{
		write(1,"-",1);
		nb = nb * -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write(1,&c,1);
	}
	else
	{
		ft_putnbrbase10(nb/10);
		ft_putnbrbase10(nb%10);
	}
}
