/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:05:05 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/30 10:10:52 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void uppercase(unsigned int index, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int main()
{
	char s[] = "hello";

	ft_striteri(s, uppercase);
	printf("%s", s);
}*/
