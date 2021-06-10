/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:45:08 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/10 12:51:25 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	n;
	char	*sub_s;

	if (!str)
		return (NULL);
	if ((unsigned int)ft_strlen(str) < start)
		return (ft_calloc(1, 1));
	n = ft_strlen(str + start);
	if (n < len)
		len = n;
	sub_s = ft_calloc(sizeof(char), (len + 1));
	if (!sub_s)
		return (NULL);
	ft_strlcpy(sub_s, str + start, len + 1);
	return (sub_s);
}
