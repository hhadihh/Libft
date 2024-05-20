/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:55:20 by hhedjam           #+#    #+#             */
/*   Updated: 2023/12/07 19:36:10 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	tmp;

	if (!s || !f)
		return ;
	i = 0;
	tmp = ft_strlen(s);
	while (i < tmp)
	{
		f(i, &s[i]);
		i++;
	}
}
