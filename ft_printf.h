/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 08:44:47 by hubretec          #+#    #+#             */
/*   Updated: 2021/12/07 15:04:06 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>

# define DEC_BASE "0123456789"
# define HEX_BASE "0123456789abcdef"
# define HEX_BASE_M "0123456789ABCDEF"

int		ft_printf(const char *s, ...);

void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	print_addr(void *p0, int *len);
void	ft_putnbr_base(int nb, char *base, int *len);
void	ft_putnbr_base_u(unsigned int nb, char *base, int *len);

size_t	ft_strlen(char *str);

#endif