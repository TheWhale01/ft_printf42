/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:40:27 by hubretec          #+#    #+#             */
/*   Updated: 2021/12/07 11:52:31 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>
#include "libft.h"
#include "libftprintf.h"

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	*len = *len + 1;
}

void	ft_putstr(char *str, int *len)
{
	while (*str)
	{
		write(1, str++, 1);
		*len = *len + 1;
	}
}

void	ft_putnbr_base(int nb, char *base, int *len)
{
	int				base_len;
	unsigned int	nbr;

	base_len = ft_strlen(base);
	if (nb < 0)
	{
		nbr = nb * -1;
		write(1, "-", 1);
	}
	else
		nbr = nb;
	if (nbr / base_len)
		ft_putnbr_base(nbr / base_len, base, len);
	write(1, &base[nbr % base_len], 1);
	*len = *len + 1;
}

char	hex_digit(int v)
{
	if (v >= 0 && v < 10)
		return ('0' + v);
	return ('a' + v - 10);
}

void	print_addr(void *p0, int *len)
{
	int			i;
	uintptr_t	p;

	if (!p0)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	p = (uintptr_t)p0;
	ft_putstr("0x", len);
	i = (sizeof(p) << 3) - 4;
	while (hex_digit((p >> i) & 0xf) == '0' && i >= 0)
		i -= 4;
	while (i >= 0)
	{
		ft_putchar(hex_digit((p >> i) & 0xf), len);
		i -= 4;
	}
}
