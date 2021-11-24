/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:42:14 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/24 17:06:16 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_h.h"

void	ft_putnbhex(unsigned int i)
{
	char str[16]="0123456789abcdef";

	if (i < 16)
	{
		write(1,&str[i],1);
	}
	else
	{
		ft_putnbhex(i/16);
		ft_putnbhex(i%16);
	}
}