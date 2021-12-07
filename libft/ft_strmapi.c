/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:15:51 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 11:08:46 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (0);
	i = -1;
	while (s[++i])
		result[i] = f(i, s[i]);
	result[i] = '\0';
	return (result);
}

//char add(unsigned int n, char c)
//{
//	(void)n;
//	return (c + 1);
//}
//
//#include <stdio.h>
//int main(int ac, char **av)
//{
//	char	*str;
//	
//	if (ac != 2)
//		return (0);
//	str = ft_strmapi(av[1], add);
//	printf("ft_strmapi : %s\n", str);
//	free(str);
//	return (0);
//}
