/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 17:47:41 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 22:36:42 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*newstr;
	char	*tmp;

	i = 0;
	tmp = 0;
	if (str)
	{
		len = ft_strlen((char*)str);
		if (!(newstr = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		tmp = newstr;
		while (*str)
		{
			*newstr = (*f)(i, *str);
			str++;
			i++;
			newstr++;
		}
		*newstr = '\0';
	}
	return (tmp);
}
