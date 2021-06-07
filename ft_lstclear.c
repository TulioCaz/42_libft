/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:41:23 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/04 15:03:14 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_e;

	if (!lst || !del)
		return ;
	next_e = NULL;
	while (*lst)
	{
		next_e = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = next_e;
	}
	*lst = NULL;
}
