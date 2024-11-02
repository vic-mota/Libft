/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:20:13 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/29 14:28:07 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

int	count(int n)
{
	int	i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	fill(char *str, long num, int len)
{
	str[len] = '\0';
	while (len)
	{
		len--;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;
	int		sign;

	num = n;
	sign = n < 0;
	len = count(num) + sign;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (sign)
		num = -num;
	fill(str + sign, num, len - sign);
	if (sign)
		str[0] = '-';
	return (str);
}
/*
int main()
{
	int num = -12345;
	char *str = ft_itoa(num);
	if (str)
	{
		printf("Número convertido: %s\n", str);
		free(str);
	}
	return 0;
}*/
