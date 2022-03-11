/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:55:32 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 15:06:18 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int main()
{
	int c;
	
	c = 'a';
	printf("ft:%d og:%d\n",ft_isalnum(c), isalnum(c));
	c = 6;
	printf("ft:%d og:%d\n",ft_isalnum(c), isalnum(c));
	c = 'C';
	printf("ft:%d og:%d\n",ft_isalnum(c), isalnum(c));
	c = 250;
	printf("ft:%d og:%d\n",ft_isalnum(c), isalnum(c));
	c = '^';
	printf("ft:%d og:%d\n",ft_isalnum(c), isalnum(c));	
	c = '5';
	printf("ft:%d og:%d\n",ft_isalnum(c), isalnum(c));

}
*/
