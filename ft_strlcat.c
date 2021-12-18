/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:00:03 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/23 16:14:11 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	slen = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (slen);
	dlen = ft_strlen(dest);
	l = size - dlen - 1;
	j = dlen;
	i = 0;
	if (size <= dlen)
		return (slen + size);
	while (src[i] && i < l)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if ((size > 0) || (dlen < slen))
		dest[j] = '\0';
	return (dlen + slen);
}
