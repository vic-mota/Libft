/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:13:29 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/29 15:47:47 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"
//size_t	ft_strlen(const char *str);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*r;
	int		len_s;

	i = 0;
	len_s = ft_strlen(s);
	r = (char *)malloc(sizeof(char) *(len_s + 1));
	if (r == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		r[i] = (*f)(i, s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
/*
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char uppercase(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return c;
}

int main()
{
	char s[] = "hello";
	char *r;
	
	r = ft_strmapi(s, uppercase);

	printf("%s", r);
}*/
