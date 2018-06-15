/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:33:20 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/07 16:43:47 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_len(int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_len(n) - 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = (char*)malloc(sizeof(char) * (len + 2))))
		return (0);
	str[len + 1] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 9)
	{
		str[len--] = n % 10 + '0';
		n /= 10;
	}
	str[len] = n + '0';
	return (str);
}
