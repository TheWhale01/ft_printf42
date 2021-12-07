/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:11:08 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 09:00:27 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*WRONG*/

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 == s2)
		return (0);
	while (i < n)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		i++;
		s1++;
		s2++;
	}
	return (0);
}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(void)
//{
//	int i;
//	int size;
//	int *tab1;
//	int *tab2;
//
//	i = -1;
//	size = 5;
//	tab1 = malloc(sizeof(*tab1) * size);
//	tab2 = malloc(sizeof(*tab2) * size);
//	if (!tab1 || !tab2)
//		return (0);
//	while (++i < size)
//	{
//		tab1[i] = i + 1;
//		tab2[i] = i + 1;
//	}
//	printf("ft_memcmp : %d\n", ft_memcmp(tab1, tab2, sizeof(*tab1) * size));
//	printf("memcmp : %d\n", memcmp(tab1, tab2, sizeof(*tab2) * size));
//	free(tab1);
//	free(tab2);
//	return (0);
//}
