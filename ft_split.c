/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhedjam <hhedjam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:50:47 by hhedjam           #+#    #+#             */
/*   Updated: 2023/12/15 15:43:48 by hhedjam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_nbr(const char *str, char c)
{
	int	i;
	int	j;
	int	new;

	i = 0;
	j = 0;
	new = 0;
	while (str[j])
	{
		if (str[j] != c && new == 0)
		{
			new = 1;
			i++;
		}
		else if (str[j] == c)
			new = 0;
		j++;
	}
	return (i);
}

static char	*dupli_kate(const char *str, int start, int finish)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc((finish - start + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (start < finish)
		dest[i++] = str[start++];
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**splited;

	splited = malloc((word_nbr(s, c) + 1) * sizeof(char *));
	if (splited == NULL)
		return (NULL);
	if (!s)
		return (0);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			splited[j++] = dupli_kate(s, index, i);
			index = -1;
		}
	}
	splited[j] = 0;
	return (splited);
}
