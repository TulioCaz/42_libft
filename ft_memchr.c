/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:36:26 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/09 22:14:54 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	c_char;

	s = (unsigned char *) src;
	c_char = (unsigned char) c;
	while (n--)
	{
		if (*s == c_char)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
