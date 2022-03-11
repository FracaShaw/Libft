/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:45:41 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 18:06:32 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*cursor;

	size = 1;
	if (!lst)
		return (0);
	cursor = lst;
	while (cursor->next)
	{
		cursor = cursor->next;
		size++;
	}
	return (size);
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


	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	printf("size:%d\n", ft_lstsize(elem1));
}
*/
