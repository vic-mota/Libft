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

//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

//char	*ft_strchr(const char *s, int c);
//size_t	ft_strlcpy(char *dest, const char *src, size_t size);
//size_t	ft_strlen(const char *str);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && len > i)
	{
		len--;
	}
	str = (char *)malloc(sizeof(char) * (len - i + 1));
	if (str != NULL)
	{
		ft_strlcpy(str, &s1[i], (len - i) + 1);
	}
	return (str);
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

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
		{
			i++;
		}
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
	{
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main()
{
	char s[] = "aaaaoiaaaa";
	char set[] = "a";

	printf("%s", ft_strtrim(s, set));
}*/