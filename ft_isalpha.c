/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:09:54 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 15:07:01 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<ctype.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int main()
{
	int c;
	c = 'a';

	printf("ft:%d og:%d\n",ft_isalpha(c), isalpha(c));
	c = 6;
	printf("ft:%d og:%d\n",ft_isalpha(c), isalpha(c));
	c = 'C';
	printf("ft:%d og:%d\n",ft_isalpha(c), isalpha(c));
	c = 250;
	printf("ft:%d og:%d\n",ft_isalpha(c), isalpha(c));
	c = '^';
	printf("ft:%d og:%d\n",ft_isalpha(c), isalpha(c));
}
*/
