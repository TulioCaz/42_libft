/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:42:50 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/04 15:55:02 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*next_e;

	if (!lst || !f)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		next_e = ft_lstnew(f(lst->content));
		if (!next_e)
		{
			while (newlst)
			{
				next_e = newlst->next;
				del(newlst->content);
				free(newlst);
				newlst = next_e;
			}
			return (NULL);
		}
		ft_lstadd_back(&newlst, next_e);
		lst = lst->next;
	}
	return (newlst);
}
