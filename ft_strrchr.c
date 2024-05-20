/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:08:34 by hhedjam           #+#    #+#             */
/*   Updated: 2023/12/15 13:59:39 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

// char	*ft_strrchr(const char *s, int c)
// {
// 	const char	*cpy;

// 	cpy = s;
// 	while (*cpy)
// 		cpy++;
// 	if (c == '\0')
// 		return ((char *)cpy);
// 	while (--cpy >= s)
// 	{
// 		if ((unsigned char)c == *cpy)
// 			return ((char *) cpy);
// 	}
// 	return (NULL);
// }

char	*ft_strrchr(const char *str, int c)
{
	char	*retval;
	int		i;

	i = ft_strlen(str);
	retval = (char *)str;
	while (i >= 0)
	{
		if (retval[i] == (char)c)
			return (retval + i);
		i--;
	}
	return (0);
}
