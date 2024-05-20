/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:10:46 by hhedjam           #+#    #+#             */
/*   Updated: 2023/12/13 20:54:26 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*p2;
	int				i;

	if (!dest && !src)
		return (NULL);
	p = dest;
	p2 = (unsigned char *)src;
	i = 0;
	while (n-- > 0)
	{
		p[i] = p2[i];
		i++;
	}
	return (dest);
}
