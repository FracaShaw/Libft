/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:01:58 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 17:08:51 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < dstsize - 1 && i < ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	dst [i] = '\0';
	return (ft_strlen(src));
}
/*
int main ()
{
	char dest1[10] = "AAAAAAAAAA";
	char dest2[10] = "AAAAAAAAAA";
	char src1[] = "coucou";
	int dstsize1 = -1;

	printf("return => ft:%zu og:%lu\n", ft_strlcpy(dest1, src1, -1),
   	ft_strlcpy(dest2, src1, dstsize1));
	printf("dest => ft:%s og:%s\n", dest1, dest2);
	
	char dest3[13] = "hellomamasita";
	char dest4[13] = "hellomamasita";
	char src2[10] = "42lisboa";
	int dstsize2 = 7;

	printf("return => ft:%zu og:%lu\n", ft_strlcpy(dest3, src2, dstsize2),
   	strlcpy(dest4, src2, dstsize2));
	printf("dest => ft:%s og:%s\n", dest3, dest4);
	
	char dest5[5] = "hello";
	char dest6[5] = "hello";
	char src3[10] = "42lisboa";
	int dstsize3 = 3;

	printf("return => ft:%zu og:%lu\n", ft_strlcpy(dest5, src3, dstsize3),
   	strlcpy(dest6, src3, dstsize3));
	printf("dest => ft:%s og:%s\n", dest5, dest6);
	
	char dest7[5] = "hello";
	char dest8[5] = "hello";
	char src4[10] = "42lisboa";
	int dstsize4 = 1;

	printf("return => ft:%zu og:%lu\n", ft_strlcpy(dest7, src4, dstsize4),
   	strlcpy(dest8, src4, dstsize4));
	printf("dest => ft:%s og:%s\n", dest7, dest8);
}
*/
