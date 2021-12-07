/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:26:43 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 11:51:59 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		needle_len;

	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && (size_t)(i + needle_len) <= len)
	{
		if (haystack[i] == *needle
			&& !ft_strncmp(&haystack[i], needle, needle_len))
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

/*NEED TO INCUDE -lbsd LIB !!!!!!!!!! */
//#include <stdio.h>
//#include <stdlib.h>
//#include <bsd/string.h>
//int main(int ac, char **av)
//{
//	if (ac != 4)
//		return (0);
//	printf("ft_strnstr : %s\nstrnstr : %s\n", 
//	ft_strnstr(av[1], av[2], atoi(av[3])), strnstr(av[1], av[2], atoi(av[3])));
//	return (0);
//}
