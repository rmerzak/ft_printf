/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase10.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:55:57 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/25 21:40:24 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_h.h"

int	ft_putnbrbase10(int i)
{
	long 	nb;
	int		j;

	j = 0;
	nb = i;
	char c;
	if (nb < 0)
	{
		write(1,"-",1);
		nb = nb * -1;
		j++;
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write(1,&c,1);
		j++;
	}
	else
	{
		j +=ft_putnbrbase10(nb/10);
		j +=ft_putnbrbase10(nb%10);
	}
	return (j);
}
