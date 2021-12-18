/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:51:37 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/11/21 17:51:14 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 1;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*alloc(int n, int cmp)
{
	char	*str;

	if (n >= 0)
		str = (char *)ft_calloc(sizeof(char), cmp + 1);
	else
	{
		cmp = cmp + 1;
		str = (char *)ft_calloc(sizeof(char), cmp + 1);
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		cmp;

	cmp = ft_count(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = alloc(n, cmp);
	if (!str)
		return (NULL);
	while (cmp > 0 && n >= 0)
	{
		str[--cmp] = (n % 10) + 48;
		n = n / 10;
	}
	if (n < 0)
	{
		n = n * -1;
		while (cmp > 0)
		{
			str[--cmp + 1] = (n % 10) + 48;
			n = n / 10;
		}
		str[0] = '-';
	}
	return (str);
}
