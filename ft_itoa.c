/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:51:49 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 19:14:40 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

char	*resgen(char *res, int div, int n)
{
	int	temp;
	int	i;

	if (res[0] == '-')
		i = 1;
	else
		i = 0;
	while (div != 0)
	{
		temp = n / div;
		n = n % div;
		res[i] = temp + '0';
		div /= 10;
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	divgen(int i)
{
	int	div;

	div = 1;
	while (i > 1)
	{
		div = div * 10;
		i--;
	}
	return (div);
}

int	count_char(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	i = count_char(n);
	if (n < 0)
	{
		n *= -1;
		res = malloc (i + 2);
		if (!res)
			return (NULL);
		res[0] = '-';
	}
	else
	{
		if (n == 0)
			return (ft_strdup("0"));
		else
			res = malloc (i + 1);
	}
	if (!res)
		return (NULL);
	return (resgen(res, divgen(i), n));
}
/*
int main()
{
	printf("res:%s\n", ft_itoa(0));
}
*/
