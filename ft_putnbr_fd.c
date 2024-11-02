/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:59:45 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/29 14:04:26 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd (nb / 10, fd);
	}
	c = nb % 10 + '0';
	write (fd, &c, 1);
}
/*
int main(void)
{
	ft_putnbr_fd(-4254941, 1);
	printf("\n");

	ft_putnbr_fd(-42, 1);
	printf("\n");

	ft_putnbr_fd(-2147483648, 1);
	printf("\n");

	ft_putnbr_fd(2147483647, 1);
	printf("\n");
}*/
