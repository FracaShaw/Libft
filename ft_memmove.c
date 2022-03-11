/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:38:34 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 15:12:49 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, long unsigned int len);

void	*ft_memmove(void *dst, const void *src, long unsigned int len)
{
	char		*destination;
	const char	*source;

	destination = dst;
	source = src;
	if (destination > source)
	{
		while (len--)
		{
			destination[len] = source[len];
		}
	}
	else
	{
		ft_memcpy(destination, source, len);
	}
	return (dst);
}	
/*
int main()
{
	char dst1[10] = "hello";
	char dst2[10] = "hello";
	char src[1] = "\0";
	int n = 0;

	printf("return=> ft:%s og:%s\n",
   	ft_memmove(dst1, src, n), memmove(dst2, src, n));
	printf("dst=> ft:%s og:%s\n", dst1, dst2);
	
	char dst3[10] = "hello";
	char dst4[10] = "hello";
	char src2[3] = "btc";
	int n2 = 3;
	printf("return=> ft:%s og:%s\n",
   	ft_memmove(dst3, src2, n2), memmove(dst4, src2, n2));
	printf("dst=> ft:%s og:%s\n", dst3, dst4);

	char dst5[10] = "hello";
	char dst6[10] = "hello";
	int src3[3] = {65,66,67};
	int n3 = 3;
	printf("return=> ft:%s og:%s\n",
   	ft_memmove(dst5, src3, n3), memmove(dst6, src3, n3));
	printf("dst=> ft:%s og:%s\n", dst5, dst6);

	char dst7[100] = "hello42lisboa";
	char dst8[100] = "hello42lisboa";
	int n4 = 10;
	printf("return=> ft:%s og:%s\n",
   	ft_memmove(dst7 + 4, dst7, n4), memmove(dst8 + 4, dst8, n4));
	printf("dst=> ft:%s og:%s\n", dst7, dst8);
}
*/
