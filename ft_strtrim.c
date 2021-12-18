/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:30:29 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/11/24 14:10:27 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	first(char const *s1, char const *set)
{
	int	front;
	int	i;
	int	j;

	front = 0;
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			j++;
		if (s1[i] == set[j])
			front++;
		else
			break ;
		i++;
	}
	return (front);
}

static size_t	last(char const *s1, char const *set)
{
	int	back;
	int	i;
	int	j;

	back = 0;
	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			j++;
		if (s1[i] == set[j])
			back++;
		else
			break ;
		i--;
	}
	return (back);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	size_t	front;
	size_t	back;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	front = first(s1, set);
	back = last(s1, set);
	if (front == ft_strlen(s1))
		return (ft_strdup(""));
	str = (char *)ft_calloc(sizeof(char), ft_strlen(s1) - front - back + 1);
	if (str == NULL)
		return (NULL);
	while (s1[front] && front < ft_strlen(s1) - back)
	{
		str[i] = s1[front];
		front++;
		i++;
	}
	return (str);
}
