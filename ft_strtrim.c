/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 15:18:35 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 22:22:15 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *str)
{
	size_t	len;
	char	*s;
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i++;
	len = ft_strlen(str) - 1;
	while (str[len] && len > i && (str[len] == ' ' || str[len] == '\t' ||
			str[len] == '\n'))
		len--;
	s = ft_strsub(str, i, len - i + 1);
	return (s);
}
