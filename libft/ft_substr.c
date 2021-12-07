/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:27:48 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 15:31:00 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_strnlen(const char *str, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (str[i] && i < maxlen)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	len = ft_strnlen(s, len);
	if (start > ft_strlen(s))
	{
		len = 0;
		start = 0;
	}
	if (ft_strlen(s) - start < len)
		len -= start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

//#include <stdio.h>
//int main(int ac, char **av)
//{
//	char *str;
//
//	if (ac != 4)
//		return (0);
//	str = ft_substr(av[1], atoi(av[2]), atoi(av[3]));
//	printf("%s\n", str);
//	free(str);
//	return (0);
//}
