/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:29:36 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/24 09:36:05 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while ((n - 1 > i) && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
/*
int main()
{
	char s1[] = "abcdefghij";
	char s2[] = "abcdefgxyz";
	
	printf("%d\n", ft_memcmp(s1, s2, 7));
	printf("%d", memcmp(s1,s2, 7));
}*/
