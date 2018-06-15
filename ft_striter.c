/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 17:12:56 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 20:31:54 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *str, void (*f)(char *))
{
	char *newstr;

	newstr = str;
	if (!str || !f)
		return ;
	while (*newstr)
	{
		(*f)(newstr);
		newstr++;
	}
}
