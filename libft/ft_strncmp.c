/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:26:30 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 12:25:38 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (--n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main(int ac, char **av)
//{
//	if (ac != 4)
//		return (0);
//	printf("ft_strncmp : %d\nstrncmp : %d\n",
//	ft_strncmp(av[1], av[2], atoi(av[3])), strncmp(av[1], av[2], atoi(av[3])));
//	return (0);
//}
