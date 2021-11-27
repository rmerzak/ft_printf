/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:01:06 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/27 19:01:25 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_putnbhexp(unsigned long nb)
{	
	int		j;
	char	*str;

	j = 0;
	str = "0123456789abcdef";
	if (nb < 16)
	{
		write(1, &str[nb], 1);
		j++;
	}
	else
	{
		j += ft_putnbhexp(nb / 16);
		j += ft_putnbhexp(nb % 16);
	}
	return (j);
}

int	ft_printpointer(void *ptr)
{
	int				j;
	unsigned long	a;

	j = 0;
	a = (unsigned long)ptr;
	write(1, "0x", 2);
	j = ft_putnbhexp(a);
	j += 2;
	return (j);
}
