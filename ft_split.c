/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:20:13 by valyssa-          #+#    #+#             */
/*   Updated: 2024/10/29 14:28:07 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*copy_w(const char *s, int len);
int		count_w(const char *s, char c);
void	free_s(char *s);

char	**ft_split(char const *s, char c)
{
	char		**res;
	int			j;
	const char	*str;
	int			len;

	j = 0;
	res = (char **)malloc(sizeof(char *) * (count_w(s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			str = s;
			len = 0;
			while (*s != '\0' && *s != c)
			{
				s++;
				len++;
			}
			res[j] = copy_w(str, len);
			if (res[j++] == NULL)
				free_s(res[j]);
		}
	}
	res[j] = NULL;
	return (res);
}

void	free_s(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		free(s);
		i++;
	}
	free(s);
}

int	count_w(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
		{
			i++;
		}
		if (s[i] != '\0' && s[i] != c)
		{
			j++;
		}
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
		}
	}
	return (j);
}

char	*copy_w(const char *s, int len)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

int	main() {
    char **res;
    char *str = "Olá, meu nome é Victoria";
    char d = ' ';

    res = ft_split(str, d);

    while (*res != NULL) {
        printf("%s\n", *res);
        res++;
    }
    free(*res);

    return 0;
}

/*char	**ft_split(char const *s, char c)
{
	char		**res;
	int			j;
	const char	*str;
	int			len;

	j = 0;
	res = (char **)malloc(sizeof(char *) * (count_w(s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			str = s;
			len = 0;
			while (*s != '\0' && *s != c)
			{
				s++;
				len++;
			}
			res[j] = copy_w(str, len);
			if (res[j] == NULL)
				free_s(res[j]);
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}*/