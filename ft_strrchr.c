/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:48:02 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/11/20 15:09:07 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	l;

	i = ft_strlen((char *)str);
	l = (char)c;
	while (i >= 0)
	{
		if (l == str[i])
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
