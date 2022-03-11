/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:29:44 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 11:57:18 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned long int	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		y;

	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
	{
		s3[i] = s2[y];
		y++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
/*
int main()
{
	printf("%s\n", ft_strjoin("hello", "world"));
}
*/
