/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:17:52 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 15:26:44 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] - s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char *s1 = "hello";
	char *s2 = "hello";
	char *s3 = "jello";
	char *s4 = "hell";
	char *s5 = "hellohellohello";
	char *s6 = "\0";

	printf("1- ft:%d og:%d\n", ft_strncmp(s1, s2, 10), strncmp(s1, s2, 10));
	printf("2- ft:%d og:%d\n", ft_strncmp(s1, s3, 10), strncmp(s1, s3, 10));
	printf("3- ft:%d og:%d\n", ft_strncmp(s1, s4, 10), strncmp(s1, s4, 10));
	printf("4- ft:%d og:%d\n", ft_strncmp(s1, s5, 10), strncmp(s1, s5, 10));
	printf("5- ft:%d og:%d\n", ft_strncmp(s1, s6, 10), strncmp(s1, s6, 10));
	printf("6- ft:%d og:%d\n", ft_strncmp(s1, s2, 10), strncmp(s1, s2, 3));
}
*/
