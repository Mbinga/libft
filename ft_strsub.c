/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:12:58 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 22:36:29 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!(tmp = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (str == NULL)
		return (NULL);
	if (tmp == NULL)
		return (NULL);
	while (len--)
	{
		tmp[i] = str[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
