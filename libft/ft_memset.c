/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:08:15 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 09:40:28 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
		ptr[i++] = c;
	return (s);
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
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
//	int c;
//	int size;
//	int *tab1;
//	int *tab2;
//
//	c = 4;
//	size = 5;
//	tab1 = malloc(sizeof(*tab1) * size);
//	tab2 = malloc(sizeof(*tab2) * size);
//	if (!tab1 || !tab2)
//		return (0);
//	printf("ft_memset : ");
//	display(ft_memset(tab1, c, sizeof(*tab1) * size), size);
//	printf("memset : ");
//	display(memset(tab2, c, sizeof(*tab2) * size), size);
//	free(tab1);
//	free(tab2);
//	return (0);
//}
