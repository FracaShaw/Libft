/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:17:09 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/05 12:40:59 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

typedef struct t_iterator
{
	int	i;
	int	y;
	int	j;
}	t_iterator;

int	wordcount(const char *s, char c)
{
	int		i;
	char	*sep1;
	char	*sep2;
	int		wrdcnt;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (!s[i])
		return (1);
	wrdcnt = 0;
	i = 0;
	sep1 = (char *)(s - 1);
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		sep2 = (char *)(s + i);
		if (sep2 != (sep1 + 1))
			wrdcnt++;
		sep1 = sep2;
		if (s[i])
			i++;
	}
	return (wrdcnt);
}

struct t_iterator	wordcpy(struct t_iterator it,
		char **r, const char *s, const char c)
{
	it.y = 0;
	while (s[it.i] != c && s[it.i])
	{
		r[it.j][it.y] = s[it.i];
		it.i++;
		it.y++;
	}
	r[it.j][it.y] = '\0';
	it.j++;
	return (it);
}

char	**ft_split(char const *s, char c)
{
	char				**r;
	struct t_iterator	it;

	r = malloc((wordcount(s, c) + 1) * sizeof(r));
	if (!r)
		return (NULL);
	it.i = 0;
	it.j = 0;
	while (s[it.i])
	{
		while (s[it.i] == c)
			it.i++;
		it.y = it.i;
		while (s[it.y] && s[it.y] != c)
			it.y++;
		if (it.y - it.i)
		{
			r[it.j] = malloc (it.y - it.i + 1);
			if (!r[it.j])
				return (NULL);
			it = wordcpy(it, r, s, c);
		}
	}
	r[it.j] = NULL;
	return (r);
}
/*
int main()
{
	char **test;
	int i;

	test = ft_split("hello_word_", '_');

	i = 0;
	while (test[i])
	{
		printf("word%d:%s\n", i, test[i]);
		i++;
	}
}
*/
