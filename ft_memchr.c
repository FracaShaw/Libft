/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:45:51 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 15:08:53 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*array;
	unsigned char	value;

	array = (unsigned char *) s;
	value = (unsigned char) c;
	while (n > 0)
	{
		if (*array == value)
			return (array);
		n--;
		array++;
	}
	return (NULL);
}
/*
int main()
{
	char *s1 = "hello";
	int a = 101;
	int b = 108;
	int c = 80;

	printf("1- ft:%s og:%s\n", ft_memchr(s1, a, 10), memchr(s1, a, 10));
	printf("2- ft:%s og:%s\n", ft_memchr(s1, b, 10), memchr(s1, b, 10));
	printf("3- ft:%s og:%s\n", ft_memchr(s1, c, 10), memchr(s1, c, 10));
	printf("3- ft:%s og:%s\n", ft_memchr(s1, c, 10), memchr(s1, c, 3));
}
*/
