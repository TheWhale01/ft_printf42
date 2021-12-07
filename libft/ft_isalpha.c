/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:01:00 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 08:16:54 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	return (0);
}

//#include <ctype.h>
//#include <stdio.h>
//#include <stdlib.h>
//int main(int ac, char **av)
//{
//	if (ac != 2)
//		return (0);
//	printf("ft_isalpha : %d\nisalpha : %d\n", 
//	ft_isalpha(atoi(av[1])), isalpha(atoi(av[1])));
//	return (0);
//}