/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:13:38 by hetan             #+#    #+#             */
/*   Updated: 2025/05/20 15:46:03 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_map;
	t_list	*last;
	t_list	*node;

	if (!f || !del)
		return (NULL);
	new_map = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new_map, del);
			return (NULL);
		}
		if (!new_map)
			new_map = node;
		else
			last->next = node;
		last = node;
		lst = lst->next;
	}
	return (new_map);
}
