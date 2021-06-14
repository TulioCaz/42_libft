/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:21:07 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/14 19:00:18 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = ft_calloc(sizeof(t_list), 1);
	if (!newlist)
		return (NULL);
	(*newlist).content = content;
	(*newlist).next = NULL;
	return (newlist);
}
