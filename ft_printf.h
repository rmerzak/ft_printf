/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:34:31 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/26 21:23:47 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_putnbrbase10(int i);
int		ft_putnbrunsigned10(unsigned int i);
void		ft_putnbhex(unsigned int i,int *j);
void		ft_putnbhX(unsigned int i,int *j);
int		ft_printpourcentage();
int		ft_printpointer(void *ptr);
int		ft_printf(const char *str, ...);

#endif
