/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsigned10.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:10:33 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/26 21:18:20 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrunsigned10(unsigned int i)
{
	int j;
	long	nb;
	char				c;

	nb = i;
	j = 0;
	if (nb < 0)
	{
		nb = nb * -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
		j++;
	}
	else
	{
		j +=ft_putnbrunsigned10(nb/10);
		j +=ft_putnbrunsigned10(nb%10);
	}
	return (j);
}
