/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 19:08:33 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 22:30:53 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	ft_countseparator(char const *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static int	ft_lenghwords(char const *s, char c, int i)
{
	int		count;

	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**rts;
	int		u;
	int		f;

	f = 0;
	u = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (!(rts = (char **)malloc(sizeof(char *) * ft_countseparator(s, c) + 2)))
		return (NULL);
	while (u < ft_countseparator(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		if (!(rts[u] = (char*)malloc(sizeof(char) * ft_lenghwords(s, c, i))))
			return (NULL);
		while (s[i] != c && s[i])
			rts[u][f++] = s[i++];
		rts[u++][f] = '\0';
		f = 0;
	}
	rts[u] = 0;
	return (rts);
}
