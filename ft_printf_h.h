/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_h.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:34:31 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/24 17:17:31 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbrbase10(int i);
void	ft_putnbrunsigned10(unsigned int i);
void	ft_putnbhex(unsigned int i);
void	ft_putnbhX(unsigned int i);
void	ft_printpourcentage();






#endif
