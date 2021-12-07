/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:08:25 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 08:29:32 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*tab;

	i = 0;
	tab = (char *)s;
	while (i < n)
		tab[i++] = '\0';
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
//	int *tab;
//
//	i = -1;
//	size = 5;
//	tab = malloc(sizeof(*tab) * size);
//	while (++i < size)
//		tab[i] = i + 1;
//	printf("Before : ");
//	display(tab, size);
//	ft_bzero(tab, sizeof(*tab) * size);
//	printf("After : ");
//	display(tab, size);
//	free(tab);
//	return (0);
//}
