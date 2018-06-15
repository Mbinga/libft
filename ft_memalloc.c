/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 17:43:55 by mbinga            #+#    #+#             */
/*   Updated: 2018/05/25 17:19:16 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	if (!(str = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
