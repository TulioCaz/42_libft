/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:38:28 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/01 19:27:21 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	char	*str;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	start = ft_strlen(s1);
	while (start && ft_strchr(set, s1[start]))
		start--;
	str = ft_substr(s1, 0, start + 1);
	return (str);
}
