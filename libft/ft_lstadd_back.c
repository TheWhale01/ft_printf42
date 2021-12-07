/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:26:49 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 15:09:16 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!alst)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	tmp = *alst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

//#include <stdio.h>
//#include <stdlib.h>
//void display(t_list *lst)
//{
//	t_list *tmp;
//	int *data;
//	tmp = lst;
//	while (tmp)
//	{
//		data = tmp->content;
//		printf("%c", *data);
//		if (tmp->next)
//			printf(" -> ");
//		tmp = tmp->next;
//	}
//	printf("\n");
//}
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
//	int size;
//	char *data;
//	t_list *lst;
//	
//	i = -1;
//	lst = 0;
//	size = 5;
//	data = malloc(sizeof(char) * size);
//	while (++i < size)
//		data[i] = i + 97;
//	i = -1;
//	while (++i < size)
//		ft_lstadd_back(&lst, ft_lstnew(data + i));
//	display(lst);
//	ft_lstclear(&lst, delete);
//	free(data);
//	return (0);
//}
