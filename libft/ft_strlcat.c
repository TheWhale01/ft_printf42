/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:15:10 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 10:42:23 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;

	i = ft_strlen(dst);
	j = 0;
	srclen = ft_strlen(src);
	if (size <= i)
		return (size + srclen);
	while (src[j] && ((j + i) < (size - 1)))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (srclen + i);
}

/*NEED TO INCUDE -lbsd LIB !!!!!!!!!! */
//#include <stdio.h>
//#include <bsd/string.h>
//int main(void)
//{
//	int size = 10;
//	char str1[] = "je ne suis";
//	char dest1[100] = " pas moi";
//	char str2[] = "je ne suis";
//	char dest2[100] = " pas moi";
//
//	printf("ft_strlcat : %ld .%s\nstrlcat : %ld	.%s\n",
//	ft_strlcat(dest1, str1, size), dest1, strlcat(dest2, str2, size), dest2);
//	return (0);
//}