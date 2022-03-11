/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:39:10 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/25 17:57:08 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	b;
	int		i;

	b = c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == b)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char *s1 = "hello";
	char *s2 = "1234512345";

	printf("ft:%s og:%s\n", ft_strrchr(s1, 'h'), strrchr(s1, 'h'));
	printf("ft:%s og:%s\n", ft_strrchr(s1, '3'), strrchr(s1, '3'));
	printf("ft:%s og:%s\n", ft_strrchr(s2, '3'), strrchr(s2, '3'));
	printf("ft:%s og:%s\n", ft_strrchr(s1, '\0'), strrchr(s1, '\0'));
}
*/
