/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:01:06 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/25 21:39:32 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_h.h"

int	ft_printpointer(void *ptr)
{
	int	j;

	j = 0;
	unsigned long	a;

	a = (unsigned long )ptr;

	write(1,"0x",2);
	j = ft_putnbhex(a);
	j+=2;
	return (j);
}
