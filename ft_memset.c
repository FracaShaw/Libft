/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:45:43 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 15:13:53 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, unsigned long int len)
{
	int				i;
	unsigned char	*p;

	p = b;
	i = 0;
	while (len > 0)
	{
		*(p + i) = c;
		i++;
		len--;
	}
	return (p);
}
/*
int main()
{
	char a[1] = "\0" ;
	char b[50] = "42lisboa is a bitch";
	int c;
	long unsigned int len;
	
	c = '?';
	len = 4;
	memset(a, c, len);
	ft_memset(b, c, len);
	printf("ft:%s og:%s\n", b, a);

	int y[10] = {0,1,2,3,4,5,6,7,8,9};

	c = 65;
	len = 3;
	printf("ft:%s og:%s\n", ft_memset(y, c, len), memset(y, c, len));
}
*/
