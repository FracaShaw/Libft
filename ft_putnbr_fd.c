/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:15:50 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/01 17:04:16 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	divgen1(int n)
{
	int	div;
	int	i;

	div = n;
	i = 0;
	while (div != 0)
	{
		div = div / 10;
		i++;
	}
	return (i);
}

int	divgen2(int i)
{
	int	div;

	div = 1;
	while (i > 1)
	{
		div *= 10;
		i--;
	}
	return (div);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	div;
	int	temp;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	div = divgen2(divgen1(n));
	while (div != 0)
	{
		temp = n / div;
		n = n % div;
		ft_putchar_fd(temp + '0', fd);
		div /= 10;
	}
	return ;
}
/*
int main()
{
	int fd;

	fd = open("hello.txt", O_RDWR);
	ft_putnbr_fd(-42, fd);
	close(fd);
}
*/
