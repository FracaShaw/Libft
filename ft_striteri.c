/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:55:13 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 20:58:41 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned long int		i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
/*
void	x2(unsigned int i, char *s)
{
	s[i] = i + '0';
}


int main()
{
	char *s;
	s = malloc((5 + 1) * sizeof(s));
	s[0] = '$';
	s[1] = '$';
	s[2] = '$';
	s[3] = '$';
	s[4] = '$';
	printf("s:%s\n", s);
	ft_striteri(s, x2);
	printf("s:%s\n", s);
}
*/
