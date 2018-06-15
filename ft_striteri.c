/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 17:53:27 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 20:36:15 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (!str || !f)
		return ;
	{
		while (*str)
		{
			(*f)(i, str);
			i++;
			str++;
		}
	}
}
