/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 19:17:25 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 22:09:48 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*new_dest;
	unsigned char	*new_src;

	new_src = (unsigned char*)src;
	new_dest = (unsigned char*)dest;
	i = 0;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		i++;
	}
	dest = (void*)new_dest;
	return (dest);
}
