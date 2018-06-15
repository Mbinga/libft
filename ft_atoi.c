/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 17:01:43 by mbinga            #+#    #+#             */
/*   Updated: 2018/05/25 17:02:17 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int index;
	int nb;
	int neg;

	index = 0;
	nb = 0;
	neg = 0;
	while ((str[index] == '\n') || (str[index] == '\t') || (str[index] == '\v')
	|| (str[index] == ' ') || (str[index] == '\f') || (str[index] == '\r'))
		index++;
	if (str[index] == '-')
		neg = 1;
	if (str[index] == '+' || str[index] == '-')
		index++;
	while (str[index] && (str[index] >= '0') && (str[index] <= '9'))
	{
		nb *= 10;
		nb += (int)str[index] - '0';
		index++;
	}
	if (neg == 1)
		return (-nb);
	else
		return (nb);
}
