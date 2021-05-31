/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:37:59 by tcamargo          #+#    #+#             */
/*   Updated: 2021/05/28 16:43:47 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, size_t n)
{
	unsigned char	s1;
	unsigned char	s2;

	while (n-- > 0)
	{
		s1 = (unsigned char) *str1++;
		s2 = (unsigned char) *str2++;
		if (s1 != s2)
			return (s1 - s2);
		if (s1 == '\0')
			return (0);
	}
	return (0);
}
