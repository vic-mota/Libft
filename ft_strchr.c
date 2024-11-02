/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:57:38 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/26 11:10:37 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	a;

	i = 0;
	str = (char *)s;
	a = (char)c;
	while (str[i] != '\0')
	{
		if (str[i] == a)
		{
			return (&str[i]);
		}
		i++;
	}
	if (a == '\0')
	{
		return (&str[i]);
	}
	return (NULL);
}
/*
int main()
{
	const char s[] = "oi victoria";
   	int c = 'v';
	
	char *result = ft_strchr(s, c);

	printf("%s\n", result);
}*/
