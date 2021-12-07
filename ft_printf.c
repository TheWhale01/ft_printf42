/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:10:29 by hubretec          #+#    #+#             */
/*   Updated: 2021/12/07 12:00:44 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libftprintf.h"

void	print_arg(const char *s, va_list args, int *len)
{
	if (*s == 'c')
		ft_putchar((char)va_arg(args, int), len);
	else if (*s == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (*s == 'p')
		print_addr(va_arg(args, void *), len);
	else if (*s == 'd' || *s == 'i' || *s == 'u')
		ft_putnbr_base(va_arg(args, int), DEC_BASE, len);
	else if (*s == 'x')
		ft_putnbr_base((va_arg(args, int)), HEX_BASE, len);
	else if (*s == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *s, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			print_arg(++s, args, &len);
			s++;
		}
		write(1, s++, 1);
	}
	va_end(args);
	return (len);
}