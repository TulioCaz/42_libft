/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:36:29 by tcamargo          #+#    #+#             */
/*   Updated: 2021/05/27 17:31:30 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dst;
	s = src;
	if (dst <= src)
		return (ft_memcpy(dst, src, n));
	d += n;
	s += n;
	while (n--)
		*--d = *--s;
	return (dst);
}
