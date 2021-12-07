/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 08:44:47 by hubretec          #+#    #+#             */
/*   Updated: 2021/12/07 11:38:20 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# define DEC_BASE "0123456789"
# define HEX_BASE "0123456789abcdef"

int		ft_printf(const char *s, ...);

void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	print_addr(void *p0, int *len);
void	ft_putnbr_base(int nb, char *base, int *len);

#endif