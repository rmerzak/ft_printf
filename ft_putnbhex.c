/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:42:14 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/27 18:48:40 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbhex(unsigned int nb, int *j)
{
	char	*str;

	str = "0123456789abcdef";
	if (nb < 16)
	{
		write(1, &str[nb], 1);
		*j += 1;
	}
	else
	{
		ft_putnbhex(nb / 16, j);
		ft_putnbhex(nb % 16, j);
	}
}
