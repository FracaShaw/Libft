/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:44:36 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/18 10:52:24 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main()
{
	int c;

	c = '0';
	printf("ft:%d og:%d\n",ft_isdigit(c), isdigit(c));
	c = 6;
	printf("ft:%d og:%d\n",ft_isdigit(c), isdigit(c));
	c = 'C';
	printf("ft:%d og:%d\n",ft_isdigit(c), isdigit(c));
	c = 250;
	printf("ft:%d og:%d\n",ft_isdigit(c), isdigit(c));
	c = '^';
	printf("ft:%d og:%d\n",ft_isdigit(c), isdigit(c));
}
*/
