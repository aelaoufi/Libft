/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:08:56 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/11/20 14:53:54 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	int		len;
	char	l;

	i = 0;
	len = ft_strlen(str);
	l = (char)c;
	while (i <= len)
	{
		if (l == str[i])
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
