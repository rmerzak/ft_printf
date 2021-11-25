/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_h.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:34:31 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/25 21:36:35 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbrbase10(int i);
int		ft_putnbrunsigned10(unsigned int i);
int		ft_putnbhex(unsigned long i);
int		ft_putnbhX(unsigned int i);
int		ft_printpourcentage();
int		ft_printpointer(void *ptr);





#endif
