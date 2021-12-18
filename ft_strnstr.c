/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:51:28 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/11/24 15:18:28 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (need == NULL && hay == NULL)
		return (NULL);
	if (need[0] == '\0' || len < 0)
		return ((char *)hay);
	while (hay[i])
	{
		j = 0;
		while (need[j] == hay[i + j] && (i + j) < len)
		{	
			j++;
			if (need[j] == '\0')
				return ((char *)(hay) + i);
		}
		i++;
	}
	return (0);
}
