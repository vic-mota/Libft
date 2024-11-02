/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:55:16 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/26 10:05:30 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"
//int	ft_strlen(const char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_src;

	i = 0;
	j = 0;
	len_src = ft_strlen(src);
	while (dest[i] && i < size)
	{
		i++;
	}
	if (i == size)
	{
		return (size + len_src);
	}
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i + j < size)
	{
		dest[i + j] = '\0';
	}
	return (i + len_src);
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

int main() {
    char dest[] = "he";
    const char *src = "llo";
    
    ft_strlcat(dest, src, 6);
    printf("%s\n", dest);
}*/
