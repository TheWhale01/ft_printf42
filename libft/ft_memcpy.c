/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:11:38 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 09:07:16 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*tab_dest;
	const char	*tab_src;

	tab_src = (char *)src;
	tab_dest = (char *)dest;
	while (n--)
		*(tab_dest++) = *(tab_src++);
	return (dest);
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
//		tab1[i] = i + 1;
//	printf("tab : ");
//	display(tab1, size);
//	printf("ft_memcpy : ");
//	ft_memcpy(tab2, tab1, sizeof(*tab1) * size);
//	display(tab2, size);
//	free(tab1);
//	free(tab2);
//	return (0);
//}
