/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:09:31 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 08:16:19 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (8);
	return (0);
}

//#include <ctype.h>
//#include <stdio.h>
//#include <stdlib.h>
//int main(int ac, char **av)
//{
//	if (ac != 2)
//		return (0);
//	printf("ft_isalnum : %d\nisalnum : %d\n", 
//	ft_isalnum(atoi(av[1])), isalnum(atoi(av[1])));
//	return (0);
//}
