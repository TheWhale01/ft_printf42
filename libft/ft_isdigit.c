/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:09:41 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 08:17:35 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}

//#include <ctype.h>
//#include <stdio.h>
//#include <stdlib.h>
//int main(int ac, char **av)
//{
//	if (ac != 2)
//		return (0);
//	printf("ft_isdigit : %d\nisdigit : %d\n", 
//	ft_isdigit(atoi(av[1])), isdigit(atoi(av[1])));
//	return (0);
//}