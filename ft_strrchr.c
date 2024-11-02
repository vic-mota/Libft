/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:57:19 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/26 12:03:50 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"
//int	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	a;

	i = ft_strlen(s);
	str = (char *)s;
	a = (char)c;
	while (i >= 0)
	{
		if (str[i] == a)
		{
			return (&str[i]);
		}
		i--;
	}
	if (a == '\0')
	{
		return (&str[i]);
	}
	return (NULL);
}
/*
int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int main()
{
	const char s[] = "";
   	int c = 't';
	
	char *result = ft_strrchr(s, c);
	char *r = strrchr(s, c);

	printf("%s\n", result);
	printf("%s\n", r);
}*/
