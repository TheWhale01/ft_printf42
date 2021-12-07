/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:10:52 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/28 08:55:44 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	to_find;
	unsigned char	*tab;

	i = 0;
	tab = (unsigned char *)s;
	to_find = (unsigned char)c;
	while (i < n)
		if (tab[i++] == to_find)
			return (&tab[i - 1]);
	return (0);
}

//#include <stdio.h>
//#include <stdlib.h>
//void display(int *tab, int size)
//{
//	int i;
//
//	i = -1;
//	while (++i < size)
//		printf("%d ", tab[i]);
//	printf("\n");
//}
//
//int main(void)
//{
//	int i;
//	int chr;
//	int size;
//	int *tab;
//
//	i = -1;
//	chr = 3;
//	size = 5;
//	tab = malloc(sizeof(*tab) * size);
//	if (!tab)
//		return (0);
//	while (++i < size)
//		tab[i] = i + 1;
//	printf("ft_memchr : ");
//	display(ft_memchr(tab, chr, sizeof(*tab) * size), size);
//	printf("memchr : ");
//	display(memchr(tab, chr, sizeof(*tab) * size), size);
//	free(tab);
//	return (0);
//}
