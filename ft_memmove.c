/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 15:58:04 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 22:36:55 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*temp_src;
	unsigned char	*temp_dest;
	int				marty_mc_fly;

	marty_mc_fly = n;
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	i = 0;
	if (src < dest)
	{
		while (--marty_mc_fly > -1)
			temp_dest[marty_mc_fly] = temp_src[marty_mc_fly];
	}
	else
	{
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (temp_dest);
}
