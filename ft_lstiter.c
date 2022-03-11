/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:40:34 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/26 11:42:12 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		(*f)(temp->content);
		temp = temp->next;
	}
}

/*
void ft_str_toupper(void *str)
{
	char *str1;
	int temp;

	str1 = str;
	while (*str1)
	{
		if (*str1 >= 'a' &&  *str1 <= 'z')
		{
			temp = *str1;
			temp = temp - 32;
			*str1 = temp;
		}
		str1++;
	}
}	

int main()
{
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *temp;
	char *str1;
	char *str2;
	char *str3;

	elem1 = malloc(3);
	elem2 = malloc(3);
	elem3 = malloc(3);

	str1 = "first";
	str2 = "second";
	str3 = "third";

	elem1->content = str1;
	elem2->content = str2;
	elem3->content = str3;

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;

	ft_str_toupper(elem1->content);
	//ft_lstiter(elem1, *ft_str_toupper);

	temp = elem1;
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
}
*/
