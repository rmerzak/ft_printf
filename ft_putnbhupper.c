/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbhupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:39:34 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/27 19:12:02 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbhupper(unsigned int i, int *j)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (i < 16)
	{
		write(1, &str[i], 1);
		*j += 1;
	}
	else
	{
		ft_putnbhupper(i / 16, j);
		ft_putnbhupper(i % 16, j);
	}
}
