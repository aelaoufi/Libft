/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:05:27 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/11/20 16:25:24 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while ((size_t)i < n)
	{
		if ((char )c == ((char *)str)[i])
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
