/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:08:04 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 08:09:59 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	nb;
	int	minus;

	nb = 0;
	minus = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
	{
		minus = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
		nb = nb * 10 + (*(nptr++) - '0');
	return (nb * minus);
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int ac, char **av)
//{
//	if (ac != 2)
//		return (0);
//	printf("%d\n", ft_atoi(av[1]) == atoi(av[1]) ? 1 : 0);
//	return (0);
//}
