/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:15:40 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 10:59:24 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//#include <stdio.h>
//#include <string.h>
//int main(int ac, char **av)
//{
//	if (ac != 2)
//		return (0);
//	printf("ft_strlen : %ld\nstrlen : %ld\n", ft_strlen(av[1]), strlen(av[1]));
//	return (0);
//}
