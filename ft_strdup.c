/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 17:04:45 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/13 17:32:02 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	size_t	len;
	void	*new;

	len = ft_strlen(str) + 1;
	new = ft_calloc(sizeof(char), len);
	if (!new)
		return (NULL);
	return (ft_memcpy(new, str, len));
}
