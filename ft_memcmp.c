/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:57:31 by hhedjam           #+#    #+#             */
/*   Updated: 2023/12/09 17:45:43 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*mew;
	const unsigned char	*mewtwo;

	mew = s1;
	mewtwo = s2;
	i = 0;
	while (i < n)
	{
		if (mew[i] != mewtwo[i])
			return (mew[i] - mewtwo[i]);
		i++;
	}
	return (0);
}
