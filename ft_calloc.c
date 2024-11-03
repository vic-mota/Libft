/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:38:02 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/26 13:12:52 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"
//void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t num, size_t size)
{
	size_t	b;
	void	*p;

	b = num * size;
	p = malloc(b);
	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(p, b);
	}
	return (p);
}
/*
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char *str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

int main()
{	
	int *r = (int *)ft_calloc(sizeof(int) * 5);
    
	//r[1] = 10;

	printf("%d\n", r[0]);
	free(r);
}*/