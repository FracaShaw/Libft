/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:38:09 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 11:04:38 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

unsigned long int	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	s2 = malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (*(s1 + i))
	{
		*(s2 + i) = *(s1 + i);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int main()
{
	char s1[6] = "hello";

	printf("ft:%s og:%s\n", ft_strdup(s1), strdup(s1));
}
*/
