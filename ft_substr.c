/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:59:07 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 20:59:31 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	int		i;

	if (start > ft_strlen(s))
		s2 = malloc(1);
	else if (ft_strlen(s + start) < len)
		s2 = malloc(ft_strlen(s + start) + 1);
	else
		s2 = malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (len - i > 0 && s[start + i] && start < ft_strlen(s))
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int main()
{
	char *s = "hitmebabyonemoretime";

	printf("%lu\n", ft_strlen(s + 100));
	printf("%s\n", ft_substr(s, 5, 4));
}
*/
