/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:24:23 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/26 12:26:11 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	a;

	i = 0;
	str = (char *)s;
	a = (char)c;
	while (i < n)
	{
		if (str[i] == a)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char s[] = "victoria";
   	int c = 't';
	
	char *result = ft_memchr(s, c, 6);
	char *r = memchr(s, c, 6);

	printf("%s\n", result);
	printf("%s\n", r);
}*/
