/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 16:31:15 by mbinga            #+#    #+#             */
/*   Updated: 2018/04/17 17:16:29 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dest;
	int		i;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	if (!(dest = (char *)malloc(sizeof(*dest) * (len + 1))))
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
