/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinga <mbinga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 15:42:04 by mbinga            #+#    #+#             */
/*   Updated: 2018/06/15 17:16:44 by mbinga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*tmp;
	t_list	*next;

	start = NULL;
	if (!lst || !f)
		return (NULL);
	start = f(lst);
	lst = lst->next;
	tmp = start;
	while (lst)
	{
		next = f(lst);
		tmp->next = next;
		tmp = next;
		lst = lst->next;
	}
	return (start);
}
