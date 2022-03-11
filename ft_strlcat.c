/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:01:58 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 15:18:21 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;

	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize < destlen + 1)
	{
		return (dstsize + srclen);
	}
	while (*(src + i) != '\0' && dstsize - i > destlen + 1)
	{
		*(dst + destlen + i) = *(src + i);
		i++;
	}
	*(dst + destlen + i) = '\0';
	return (destlen + srclen);
}
/*
int main ()
{
	char dest1[100] = "hello";
	char dest2[100] = "hello";
	char src1[10] = "42lisboa";
	int dstsize1 = 10;

	printf("return => ft:%zu og:%lu\n", ft_strlcat(dest1, src1, dstsize1),
   	strlcat(dest2, src1, dstsize1));
	printf("dest => ft:%s og:%s\n", dest1, dest2);
	
	char dest3[100] = "hellomamasita";
	char dest4[100] = "hellomamasita";
	char src2[10] = "42lisboa";
	int dstsize2 = 7;

	printf("return => ft:%zu og:%lu\n", ft_strlcat(dest3, src2, dstsize2),
   	strlcat(dest4, src2, dstsize2));
	printf("dest => ft:%s og:%s\n", dest3, dest4);
	
	char dest5[10] = "hello";
	char dest6[10] = "hello";
	char src3[10] = "42lisboa";
	int dstsize3 = 3;

	printf("return => ft:%zu og:%lu\n", ft_strlcat(dest5, src3, dstsize3),
   	strlcat(dest6, src3, dstsize3));
	printf("dest => ft:%s og:%s\n", dest5, dest6);
	
	char dest7[10] = "hello";
	char dest8[10] = "hello";
	char src4[10] = "42lisboa";
	int dstsize4 = 1;

	printf("return => ft:%zu og:%lu\n", ft_strlcat(dest7, src4, dstsize4),
   	strlcat(dest8, src4, dstsize4));
	printf("dest => ft:%s og:%s\n", dest7, dest8);
}
*/
