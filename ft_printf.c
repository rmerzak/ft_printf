/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:40:30 by rmerzak           #+#    #+#             */
/*   Updated: 2021/11/26 22:31:09 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i =0;
	count = 0;
	va_start(args, str);

	while(str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if(str[i] == 'd' || str[i] == 'i')
				count += ft_putnbrbase10(va_arg(args,int));
			else if(str[i] == 's')
				count += ft_putstr(va_arg(args,char *));
			else if(str[i] == 'p')
				count += ft_printpointer(va_arg(args,void *));
			else if(str[i] == 'x')
				ft_putnbhex(va_arg(args,unsigned int),&count);
			else if(str[i] == 'X')
				ft_putnbhX(va_arg(args,unsigned int),&count);
			else if (str[i] == '%')
				count += ft_printpourcentage(va_arg(args,void *));
			else if (str[i] == 'c')
				count += ft_putchar(va_arg(args,int));
			else if (str[i] == 'u')
				count += ft_putnbrunsigned10(va_arg(args,unsigned int));
			i++;
		}
		else
		{
			write(1,&str[i],1);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
/*
int main()
{
	// char	*s = "heheheh";
	

	// printf("return |%d| ===== |%d||\n", printf("|%s|", s), ft_printf("|%s|", s));
	ft_printf("%x\n",4294967241);
	printf("%lx",4294967241);
}
*/