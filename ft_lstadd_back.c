/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:52:47 by hhedjam           #+#    #+#             */
/*   Updated: 2023/12/09 19:44:41 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pos;

	if (*lst)
	{
		pos = *lst;
		while (pos->next)
			pos = pos->next;
		pos->next = new;
	}
	else
		*lst = new;
}
