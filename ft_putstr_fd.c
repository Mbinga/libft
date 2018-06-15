/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:57:08 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 19:13:30 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <string.h>

void	ft_putstr_fd(char const *str, int fd)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
	}
}
