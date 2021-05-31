/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:26:28 by tcamargo          #+#    #+#             */
/*   Updated: 2021/05/27 17:51:23 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *str1, void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				charCompareStatus;

	s1 = str1;
	s2 = str2;
	charCompareStatus = 0;
	if (s1 == s2)
	{
		return (charCompareStatus);
	}
	while (n--)
	{
		if (*s1 != *s2)
		{
			if (*s1 > *s2)
				charCompareStatus = 1;
			else
				charCompareStatus = -1;
			break ;
		}
		s1++;
		s2++;
	}
	return (charCompareStatus);
}
