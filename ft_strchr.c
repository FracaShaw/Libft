/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:49:09 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 15:14:32 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;

	b = c;
	while (*s)
	{
		if (*s == b)
			return ((char *) s);
		s++;
	}
	if (b == '\0')
		return ((char *) s);
	return (NULL);
}
/*
int main()
{
	char *s1 = "hello";
	char *s2 = "1234512345";

	printf("ft:%s og:%s\n", ft_strchr(s1, 'e'), strchr(s1, 'e'));
	printf("ft:%s og:%s\n", ft_strchr(s1, '3'), strchr(s1, '3'));
	printf("ft:%s og:%s\n", ft_strchr(s2, '3'), strchr(s2, '3'));
	printf("ft:%s og:%s\n", ft_strchr(s1, '\0'), strchr(s1, '\0'));
}
*/
