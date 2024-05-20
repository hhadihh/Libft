/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:56:01 by hhedjam           #+#    #+#             */
/*   Updated: 2023/12/15 15:21:58 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*newlist;
	t_list	*cpy;

	newlist = NULL;
	if (!f || !del || !lst)
		return (NULL);
	cpy = lst;
	while (cpy)
	{
		node = ft_lstnew(f(cpy->content));
		if (!node)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, node);
		cpy = cpy->next;
	}
	return (newlist);
}
