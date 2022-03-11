/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:05:46 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 15:07:56 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}
/*
int main()
{
	int c;
	c = 'a';

	printf("ft:%d og:%d\n",ft_isascii(c), isascii(c));
	c = 6;
	printf("ft:%d og:%d\n",ft_isascii(c), isascii(c));
	c = 'C';
	printf("ft:%d og:%d\n",ft_isascii(c), isascii(c));
	c = 127;
	printf("ft:%d og:%d\n",ft_isascii(c), isascii(c));
	c = 128;
	printf("ft:%d og:%d\n",ft_isascii(c), isascii(c));
	c = 250;
	printf("ft:%d og:%d\n",ft_isascii(c), isascii(c));
	c = '^';
	printf("ft:%d og:%d\n",ft_isascii(c), isascii(c));
}
*/
