/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:40:30 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/27 19:11:16 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(char c, va_list args, int *count)
{
	if (c == 'd' || c == 'i')
		*count += ft_putnbrbase10(va_arg(args, int));
	else if (c == 's')
		*count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		*count += ft_printpointer(va_arg(args, void *));
	else if (c == 'c')
		*count += ft_putchar(va_arg(args, int));
	else if (c == 'u')
		*count += ft_putnbrunsigned10(va_arg(args, unsigned int));
	else if (c == 'x')
		ft_putnbhex(va_arg(args, unsigned int), count);
	else if (c == 'X')
		ft_putnbhupper(va_arg(args, unsigned int), count);
	else if (c == '%')
		*count += ft_printpourcentage();
	return (1);
}

int	ft_exist(char c)
{
	char	*str;
	int		i;

	i = 0;
	str = "dispcuxX%%";
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (ft_exist(str[i]))
				ft_conversion(str[i++], args, &count);
		}
		else
		{
			write(1, &str[i++], 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
