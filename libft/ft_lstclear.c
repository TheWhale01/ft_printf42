/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:38:37 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 14:32:23 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == 0)
		return ;
	if (*lst == 0)
		return ;
	ft_lstclear(&((*lst)->next), del);
	ft_lstdelone(*lst, del);
	*lst = 0;
}

//#include <stdio.h>
//
//void delete(void *ptr)
//{
//	ptr = 0;
//	(void)ptr;
//}
//
//int main(void)
//{
//	int i;
//	int data;
//	t_list *lst;
//
//	i = -1;
//	lst = 0;
//	data = 4;
//	while (++i < 5)
//		ft_lstadd_front(&lst, ft_lstnew(&data));
//	ft_lstclear(&lst, delete);
//	return (0);
//}
