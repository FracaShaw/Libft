/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:41:31 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 20:57:27 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (lst);
	temp = lst;
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}
/*
int main()
{
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;

	elem1 = malloc(3);
	elem2 = malloc(3);
	elem3 = malloc(3);

	elem1->content = "first";
	elem2->content = "second";
	elem3->content = "third";

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	printf("last content:%s\n", ft_lstlast(elem1)->content);
}
*/
