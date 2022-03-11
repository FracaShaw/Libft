/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:42:50 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 17:02:00 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, long unsigned int len)
{
	char						*destination;
	const char					*source;
	long unsigned int			i;

	if (!dst && !src)
		return (dst);
	destination = dst;
	source = src;
	i = 0;
	while (i < len)
	{
		*(destination + i) = *(source + i);
		i++;
	}
	return (destination);
}
/*
int main()
{
	char dst1[10] = "hello";
	char dst2[10] = "hello";
	char src[1] = "\0";
	int n = 0;

	printf("return=> ft:%s og:%s\n",
   	ft_memcpy(dst1, src, n), memcpy(dst2, src, n));
	printf("dst=> ft:%s og:%s\n", dst1, dst2);
	
	char dst3[10] = "hello";
	char dst4[10] = "hello";
	char src2[3] = "btc";
	int n2 = 3;
	printf("return=> ft:%s og:%s\n",
   	ft_memcpy(dst3, src2, n2), memcpy(dst4, src2, n2));
	printf("dst=> ft:%s og:%s\n", dst3, dst4);

	char dst5[10] = "hello";
	char dst6[10] = "hello";
	int src3[3] = {65,66,67};
	int n3 = 3;
	printf("return=> ft:%s og:%s\n",
   	ft_memcpy(dst5, src3, n3), memcpy(dst6, src3, n3));
	printf("dst=> ft:%s og:%s\n", dst5, dst6);

	char dst7[100] = "learningisfun";
	char dst8[100] = "learningisfun";
	int n4 = 10;
	printf("return=> ft:%s og:%s\n",
   	ft_memcpy(dst7 + 8, dst7, n4), memcpy(dst8 + 8, dst8, n4));
	printf("dst=> ft:%s og:%s\n", dst7, dst8);

	printf("return=> ft:%s og:%s\n",
   	memcpy(NULL, NULL, 10), memcpy(NULL, NULL, 10));

}
*/
