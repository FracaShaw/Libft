/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:29:10 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 15:31:26 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
int main()
{
	printf("ft:%d og:%d\n", ft_toupper('a'), toupper('a'));
	printf("ft:%d og:%d\n", ft_toupper('z'), toupper('z'));
	printf("ft:%d og:%d\n", ft_toupper('g'), toupper('g'));
	printf("ft:%d og:%d\n", ft_toupper(1), toupper(1));
	printf("ft:%d og:%d\n", ft_toupper(' '), toupper(' '));
	printf("ft:%d og:%d\n", ft_toupper('{'), toupper('{'));
}
*/
