/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:16:37 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/25 18:43:06 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
/*
int main()
{
	struct s_list *first;
	struct s_list *new;

	first = malloc(3);
	new = malloc(3);
	first->content = "first";
	new->content = "new";
	ft_lstadd_front(&first, new);
	printf("first:%s\n", first->content);
	printf("second:%s\n", first->next->content);
}
*/
