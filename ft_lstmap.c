/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:47:51 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 21:17:02 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	head = ft_lstnew((*f)(lst->content));
	if (!head)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			while (head)
			{
				temp = head->next;
				(*del)(head->content);
				free(head);
				head = temp;
			}
			return (NULL);
		}
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}
/*
void *ft_f(void *lst)
{
	return (lst);
}

void del(void *lst)
{
	char *lol;
	lol = lst;
	return;
}

int main()
{
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *new;

	elem1 = malloc(3);
	elem2 = malloc(3);
	elem3 = malloc(3);

	elem1->content = "first";
	elem2->content = "second";
	elem3->content = "third";

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	new = ft_lstmap(elem1, ft_f, del);
	while (new)
	{
		printf("%s\n", new->content);
		new = new->next;
	}
}
*/
