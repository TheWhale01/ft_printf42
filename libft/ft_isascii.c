/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:09:21 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 08:17:18 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

//#include <ctype.h>
//#include <stdio.h>
//#include <stdlib.h>
//int main(int ac, char **av)
//{
//	if (ac != 2)
//		return (0);
//	printf("ft_isascii : %d\nisascii : %d\n", 
//	ft_isascii(atoi(av[1])), isascii(atoi(av[1])));
//	return (0);
//}