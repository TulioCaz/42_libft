/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:40:28 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/01 19:37:26 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	char	*s;

	s = (char *) str;
	while (*s)
	{
		if (*s == (char)c)
			return (s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return (s);
	return (NULL);
}
