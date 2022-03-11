/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:45:51 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 15:09:52 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*array1;
	unsigned char	*array2;
	int				i;

	array1 = (unsigned char *) s1;
	array2 = (unsigned char *) s2;
	i = 0;
	while (n > 0)
	{
		if (array1[i] != array2[i])
			return (array1[i] - array2[i]);
		n--;
		i++;
	}
	return (0);
}
/*
int main()
{
	char *s1 = "hello";
	char *s2 = "hello";
	char *s3 = "jpeg";
	char *s4 = "gello";
	char *s5 = "hella";

	printf("1- ft:%d og:%d\n", ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5));
	printf("2- ft:%d og:%d\n", ft_memcmp(s1, s3, 5), memcmp(s1, s3, 5));
	printf("3- ft:%d og:%d\n", ft_memcmp(s1, s4, 5), memcmp(s1, s4, 5));
	printf("3- ft:%d og:%d\n", ft_memcmp(s1, s5, 5), memcmp(s1, s5, 5));
	printf("3- ft:%d og:%d\n", ft_memcmp(s1, s2, 3), memcmp(s1, s2, 3));
}
*/
