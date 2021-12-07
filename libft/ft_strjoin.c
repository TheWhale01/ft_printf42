/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:14:55 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 10:35:12 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s1len;
	char	*str;

	s1len = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (s1len + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[i - s1len])
	{
		str[i] = s2[i - s1len];
		i++;
	}
	str[i] = '\0';
	return (str);
}

//#include <stdio.h>
//#include <string.h>
//int main(int ac, char **av)
//{
//	char *str1;
//
//	if (ac != 3)
//		return (0);
//	str1  = ft_strjoin(av[1], av[2]);
//	printf("ft_strjoin : %s\n", str1);
//	free(str1);
//	return (0);
//}
