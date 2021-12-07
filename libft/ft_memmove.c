/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:45:41 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 09:29:52 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*src_c;
	char	*dst_c;

	src_c = src;
	dst_c = dest;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		while ((int)--n >= 0)
			*(dst_c + n) = *(src_c + n);
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
//	char *tab1;
//	char *tab2;
//	char *tab3;
//	char *tab4;
//
//	i = -1;
//	size = 5;
//	tab1 = malloc(sizeof(*tab1) * size);
//	tab2 = malloc(sizeof(*tab2) * size);
//	tab3 = malloc(sizeof(*tab2) * size);
//	tab4 = malloc(sizeof(*tab2) * size);
//	if (!tab1 || !tab2 || !tab3 || !tab4)
//		return (0);
//	while (++i < size)
//	{
//		tab1[i] = i + 48;
//		tab3[i] = i + 48;
//	}
//	printf("ft_memmove : ");
//	display(ft_memmove(tab2, tab1, sizeof(*tab2) * size), size);
//	printf("memmove : ");
//	display(ft_memmove(tab4, tab3, sizeof(*tab4) * size), size);
//	free(tab1);
//	free(tab2);
//	free(tab3);
//	free(tab4);
//	return (0);
//}