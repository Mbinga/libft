/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:25:07 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 22:36:14 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *str, const char *needle)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (0);
}
