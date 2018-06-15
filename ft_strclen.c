/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <mbinga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 16:56:42 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/15 17:37:58 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(const char *str, char c)
{
	size_t len;

	len = 0;
	while (str[len] && str[len] != c)
	{
		len++;
	}
	return (len);
}
