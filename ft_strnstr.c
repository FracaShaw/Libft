/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:45:40 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 10:55:17 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		y;
	size_t	len_temp;

	if (*needle == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && len > 0)
	{
		j = 0;
		y = i;
		len_temp = len;
		while (haystack[y] == needle[j] && len_temp > 0 )
		{
			y++;
			j++;
			len_temp--;
			if (needle[j] == '\0')
				return ((char *)(haystack + y - j));
		}
		i++;
		len--;
	}
	return (NULL);
}
/*
int main()
{
	char *s1 = "aaabcabcd";
	char *s2 = "aabc";
	char *s3 = "people";
	char *s4 = "42lisboe";
	char *s5 = "\0";

	printf("ft:%s og:%s\n", ft_strnstr(s1, s2, -1), strnstr(s1, s2, -1));
	printf("ft:%s og:%s\n", ft_strnstr(s1, s3, 100), strnstr(s1, s3, 100));
	printf("ft:%s og:%s\n", ft_strnstr(s1, s4, 100), strnstr(s1, s4, 100));
	printf("ft:%s og:%s\n", ft_strnstr(s1, s3, 4), strnstr(s1, s3, 4));
	printf("ft:%s og:%s\n", ft_strnstr(s1, s5, 100), strnstr(s1, s5, 100));

}
*/
