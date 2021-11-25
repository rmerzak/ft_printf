/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbhX.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:06:46 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/25 21:41:22 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_h.h"

int	ft_putnbhX(unsigned long i)
{
	int j;

	j = 0;
	char	str[16]="0123456789ABCDEF";

	if(i < 16)
	{
		write(1,&str[i],1);
		j++;
	}
	else
	{
		j+=ft_putnbhX(i / 16);
		j+=ft_putnbhX(i % 16);
	}

	return (j);
}
