/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:42:14 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/25 21:41:03 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_h.h"

int	ft_putnbhex(unsigned long i)
{
	int	j;

	j = 0;
	char str[16]="0123456789abcdef";

	if (i < 16)
	{
		write(1,&str[i],1);
		j++;
	}
	else
	{
		j+=ft_putnbhex(i/16);
		j+=ft_putnbhex(i%16);
	}
	return (j);
}
