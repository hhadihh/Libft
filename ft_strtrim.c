/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:47:03 by hhedjam           #+#    #+#             */
/*   Updated: 2023/12/09 19:24:03 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	is_sep(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*s2;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	while (is_sep(s1[i], set))
		i++;
	len = ft_strlen(s1);
	while (len > i && is_sep(s1[len - 1], set))
		len--;
	s2 = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!s2)
		return (NULL);
	while (i < len)
		s2[j++] = s1[i++];
	s2[j] = '\0';
	return (s2);
}
