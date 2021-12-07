/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:14:20 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 10:32:55 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*string;

	string = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!string)
		return (0);
	i = -1;
	while (src[++i] != '\0')
		string[i] = src[i];
	string[i] = '\0';
	return (string);
}

//#include <stdio.h>
//#include <string.h>
//int main(int ac, char **av)
//{
//	char *str1;
//	char *str2;
//
//	if (ac != 2)
//		return (0);
//	str1  = ft_strdup(av[1]);
//	str2 = strdup(av[1]);
//	printf("ft_strdup : %s\nstrdup : %s\n", str1, str2);
//	free(str1);
//	free(str2);
//	return (0);
//}