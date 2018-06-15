/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:11:32 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/05 22:34:52 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	if (str1 == str2 || n == 0)
		return (0);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (n)
		{
			s1++;
			s2++;
		}
	}
	return (0);
}
