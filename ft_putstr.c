/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:45:58 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/24 15:49:02 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_h.h"

void ft_putstr(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1)
			i++;
	}
}