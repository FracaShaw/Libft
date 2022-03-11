/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:06:13 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 15:04:28 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_bzero(void *b, unsigned long int len)
{
	int				i;
	unsigned char	*p;

	p = b;
	i = 0;
	while (len > 0)
	{
		*(p + i) = 0;
		i++;
		len--;
	}
	return (p);
}
/*
int main()
{
	char a[50] = "42lisboa is a bitch";
	char b[50] = "42lisboa is a bitch";
	long unsigned int len;
	
	len = 10;
	bzero(a, len);
	ft_bzero(b, len);
	printf("ft:%s og:%s\n", b, a);

	int y[10] = {0,1,2,3,4,5,6,7,8,9};

	len = 3;
	printf("ft:%s og:%s\n", ft_bzero(y, len), bzero(y, len));
}
*/
