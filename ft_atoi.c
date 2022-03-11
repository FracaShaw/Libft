/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:16:56 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/10/23 14:59:55 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

const char	*skip_blanks(const char *str)
{
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	return (str);
}

int	number_extraction(const char *str)
{
	int	result;

	if (*str >= '0' && *str <= '9')
	{
		result = *str - '0';
		str++;
	}
	else
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	neg;

	neg = 0;
	str = skip_blanks(str);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = 1;
		str++;
	}
	if (neg)
		return (-number_extraction(str));
	return (number_extraction(str));
}
/*
int main() {
	printf("ft:%d og:%d\n",
   	ft_atoi("-+12345hellobaby"), atoi("-+12345hellobaby"));
	printf("ft:%d og:%d\n",
   	ft_atoi("-12345hellobaby"), atoi("-12345hellobaby"));
	printf("ft:%d og:%d\n",
   	ft_atoi("+12345hellobaby"), atoi("+12345hellobaby"));
	printf("ft:%d og:%d\n",
   	ft_atoi("123h45hellobaby"), atoi("123h45hellobaby"));
	printf("ft:%d og:%d\n",
   	ft_atoi("123456789hellobaby"), atoi("123456789hellobaby"));
	printf("ft:%d og:%d\n",
   	ft_atoi("hellobaby"), atoi("hellobaby1234"));
	printf("ft:%d og:%d\n",
   	ft_atoi(""), atoi(""));
	printf("ft:%d og:%d\n",
   	ft_atoi("12345"), atoi("12345"));
	printf("ft:%d og:%d\n",
   	ft_atoi("-+12345hellobaby"), atoi("-+12345hellobaby"));
	printf("ft:%d og:%d\n",
   	ft_atoi("    12345hellobaby"), atoi("    12345hellobaby"));

}
*/
