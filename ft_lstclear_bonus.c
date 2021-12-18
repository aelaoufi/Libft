/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:32:56 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/11/24 14:57:58 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*a;

	if (lst != NULL && del != NULL)
	{
		temp = *lst;
		while (temp)
		{
			a = temp;
			temp = temp->next;
			ft_lstdelone(a, del);
		}
		*lst = NULL;
	}
}
