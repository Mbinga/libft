/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 16:53:33 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 22:14:07 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *str)
{
	int le;

	if (str)
	{
		le = ft_strlen(str);
		ft_memset(str, '\0', le);
	}
}
