/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:23:47 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 20:56:53 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp1;
	t_list	*temp2;

	if (lst && del)
	{
		temp1 = *lst;
		while (temp1)
		{
			temp2 = temp1;
			temp1 = temp1->next;
			(*del)(temp2->content);
			free (temp2);
		}
		*lst = NULL;
	}
}
