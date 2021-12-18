/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:51:37 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/11/24 14:00:44 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_nmbofwrds(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		if (str[i] == c && str[i - 1] != c)
			count++;
		i++;
	}
	if (str[ft_strlen(str) - 1] != c && str[0] != '\0')
		count++;
	return (count);
}

static char	**wordsplit(const char *s, char c, char **str, int i)
{
	int	end;
	int	j;
	int	k;

	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			end = i;
			while (s[end] != c && s[end])
				end++;
			str[j] = (char *)ft_calloc(sizeof(char), end - i + 1);
			if (str[j] == NULL)
				return (NULL);
			k = 0;
			while (i < end)
				str[j][k++] = s[i++];
			j++;
		}
		if (s[i])
			i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char **)ft_calloc(sizeof(char *), ft_nmbofwrds((char *)s, c) + 1);
	if (str == NULL)
		return (NULL);
	str = wordsplit(s, c, str, i);
	return (str);
}
