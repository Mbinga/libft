/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <mbinga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 18:06:17 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/15 18:17:24 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *str, size_t n)
{
	size_t	len;
	char	*dest;
	size_t	i;

	len = 0;
	i = 0;
	while (str[len] && len < n)
		len++;
	if (!(dest = (char *)malloc(sizeof(*dest) * (len + 1))))
		return (NULL);
	while (str[i] && i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
