/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:15:44 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/22 18:11:00 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
int main(void)
{
	char str[] = "hello";
	int i = 0;
	ft_bzero(str, 3);
	while(str[i] == '\0')
	{
		printf("\\0");
		i++;
	}
	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
}*/
