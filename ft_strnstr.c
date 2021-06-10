/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:18:37 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/09 22:30:29 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	len;

	if (*str2 == '\0')
		return ((char *) str1);
	len = ft_strlen(str2);
	while (*str1 != '\0' && n >= len)
	{
		if (ft_strncmp(str1, str2, len) == 0)
			return ((char *)str1);
		str1++;
		n--;
	}
	return (NULL);
}
