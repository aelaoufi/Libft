/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:03:20 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/11/21 18:42:04 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				i;
	unsigned int	j;
	char			*sub;

	i = 0;
	if (!s)
		return (NULL);
	j = start;
	if (start > (unsigned int)ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if ((size_t)ft_strlen(s + start) >= len)
		sub = (char *)ft_calloc(sizeof(char), len + 1);
	if ((size_t)ft_strlen(s + start) < len)
		sub = (char *)ft_calloc(sizeof(char), ft_strlen(s + start) + 1);
	if (!sub)
		return (NULL);
	while ((size_t)i < ft_strlen(s + start) && (size_t)i < len)
	{
		sub[i] = s[j];
		i++;
		j++;
	}
	return (sub);
}
