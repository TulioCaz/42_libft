/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:34:13 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/09 10:50:32 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t len)
{
	size_t	dn;
	size_t	sn;
	size_t	i;
	size_t	j;

	dn = ft_strlen(dst);
	sn = ft_strlen(src);
	i = dn;
	j = 0;
	if (dn >= len)
		return (sn + len);
	while (src[j] && i < (len - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (sn + dn);
}
