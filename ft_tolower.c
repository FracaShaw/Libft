/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:29:10 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 15:30:50 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
int main()
{
	printf("ft:%d og:%d\n", ft_tolower('A'), tolower('A'));
	printf("ft:%d og:%d\n", ft_tolower('Z'), tolower('Z'));
	printf("ft:%d og:%d\n", ft_tolower('g'), tolower('g'));
	printf("ft:%d og:%d\n", ft_tolower(1), tolower(1));
	printf("ft:%d og:%d\n", ft_tolower(' '), tolower(' '));
	printf("ft:%d og:%d\n", ft_tolower('{'), tolower('{'));
}
*/
