/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbhX.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:06:46 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/26 22:29:20 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbhX(unsigned int i,int *j)
{

	char	str[16]="0123456789ABCDEF";

	if(i < 16)
	{
		write(1,&str[i],1);
		*j += 1;	
	}
	else
	{
		ft_putnbhX(i / 16, j);
		ft_putnbhX(i % 16, j);
	}

}
