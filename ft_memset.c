/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 18:19:09 by mbinga            #+#    #+#             */
/*   Updated: 2018/05/16 16:04:43 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
