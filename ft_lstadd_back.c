/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:52:30 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 20:55:39 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (!alst)
	{
		return ;
	}
	if (*alst)
	{
		temp = *alst;
		temp = ft_lstlast(temp);
		temp->next = new;
	}
	else
		*alst = new;
}
/*
int main()
{
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *new;

	elem1 = malloc(3);
	elem2 = malloc(3);
	elem3 = malloc(3);
	new = malloc(3);

	elem1->content = "first";
	elem2->content = "second";
	elem3->content = "third";
	new->content = "new";

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	ft_lstadd_back(&elem1, new);
	printf("last content:%s\n", ft_lstlast(elem1)->content);
}
*/
