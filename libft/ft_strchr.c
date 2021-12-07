/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:14:09 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 10:42:43 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	x;

	i = -1;
	x = c;
	while (s[++i])
		if (s[i] == x)
			return ((char *)&s[i]);
	if (s[i] == x)
		return ((char *)&s[i]);
	return (0);
}

//#include <stdio.h>
//#include <string.h>
//int main(int ac, char **av)
//{
//	if (ac != 3)
//		return (0);
//	printf("ft_strchr : %s\nstrchr : %s\n",
//	ft_strchr(av[1], av[2][0]), strchr(av[1], av[2][0]));
//	return (0);
//}
