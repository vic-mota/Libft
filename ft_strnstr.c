/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:25:21 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/24 11:33:44 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	char	*b;

	i = 0;
	b = (char *)big;
	if (little[0] == '\0')
	{
		return (b);
	}
	while (i < n && b[i] != '\0')
	{
		j = 0;
		while (little[j] != '\0' && b[i + j] == little[j] && \
		b[i + j] != '\0' && n > (i + j))
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return (&b[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char big[] = "hello";
	char little[] = "llo";

	char *r = ft_strnstr(big, little, 5);
	//char *p = strnstr(big, little, 5);
	printf("%s\n", r);
	//printf("%s", p);
}*/
