/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <mbinga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 15:36:19 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/15 17:11:11 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	{
		if (lst == NULL)
			return ;
		while (lst->next != NULL)
		{
			(*f)(lst);
			lst = lst->next;
		}
		(*f)(lst);
	}
}
