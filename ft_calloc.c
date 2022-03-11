/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:07:31 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 15:39:19 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*retour;

	retour = malloc(count * size);
	if (!retour)
		return (NULL);
	retour = ft_bzero(retour, size * count);
	return (retour);
}
/*
int main()
{
	char *str;

	str = ft_calloc(0, 0);
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
}
*/
