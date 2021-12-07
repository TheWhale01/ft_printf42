/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:10:40 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 08:22:30 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	nb_digits(int nb, int *minus)
{
	int				len;
	unsigned int	nbr;

	if (nb < 0)
	{
		nbr = nb * -1;
		*minus = 1;
	}
	else
		nbr = nb;
	len = 1;
	while (nbr / 10)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				minus;
	int				digits;
	char			*str;
	unsigned int	nb;

	minus = 0;
	digits = nb_digits(n, &minus);
	str = (char *)malloc(sizeof(char) * (digits + minus + 1));
	if (!str)
		return (0);
	if (minus)
	{
		nb = n * -1;
		str[0] = '-';
	}
	else
		nb = n;
	str[digits-- + minus] = '\0';
	while (digits + minus >= minus)
	{
		str[digits-- + minus] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

//#include <stdio.h>
//#include <stdlib.h>
//int main(int ac, char **av)
//{
//	if (ac != 2)
//		return (0);
//	printf("ft_itoa : %s\nav[1] : %s\n", ft_itoa(atoi(av[1])), av[1]);
//	return (0);
//}
//