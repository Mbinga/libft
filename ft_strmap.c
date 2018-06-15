/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 17:58:13 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 22:17:43 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	int		i;
	int		len;
	char	*newstr;
	char	*tmp;

	i = 0;
	tmp = 0;
	newstr = NULL;
	if (str)
	{
		len = ft_strlen((char *)str);
		if (!(newstr = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		tmp = newstr;
		while (*str)
		{
			*newstr = (*f)(*str);
			str++;
			newstr++;
		}
		*newstr = '\0';
	}
	return (tmp);
}
