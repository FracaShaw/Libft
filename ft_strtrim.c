/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:59:54 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 17:10:10 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

long unsigned int	beg_check(char const *s1, char const *set)
{
	long unsigned int	i;
	int					match;
	int					j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		match = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				match = 1;
			j++;
		}
		if (!match)
			break ;
		i++;
	}
	return (i);
}

long unsigned int	end_check(char const *s1, char const *set)
{
	int					match;
	long unsigned int	i;
	int					j;

	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		j = 0;
		match = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				match = 1;
			j++;
		}
		if (!match)
			break ;
		i--;
	}
	return (ft_strlen(s1) - (i + 1));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char					*s2;
	unsigned long int		i;
	int						y;

	if (beg_check(s1, set) + end_check(s1, set) > ft_strlen(s1))
		s2 = malloc(1);
	else
		s2 = malloc(ft_strlen(s1) + 1 - (beg_check(s1, set)
					+ end_check(s1, set)));
	if (!s2)
		return (NULL);
	i = 0;
	y = 0;
	i = beg_check(s1, set);
	while (i < ft_strlen(s1) - end_check(s1, set))
	{
		s2[y] = s1[i];
		i++;
		y++;
	}
	s2[y] = '\0';
	return (s2);
}
/*
int main()
{
	printf("end_check:%lu\n", end_check("tripouille  xx", " x"));
	printf("------------\n");
	printf("%s\n", ft_strtrim("tripouille  xx", " x"));
	printf("%s\n", ft_strtrim("hello", "h"));
	printf("%s\n", ft_strtrim("hello", "o"));
	printf("%s\n", ft_strtrim("hello", "ab"));
	
}
*/
