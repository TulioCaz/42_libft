/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:38:28 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/09 12:48:13 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	char	*s;

	while (*str && ft_strchr(set, *str))
		str++;
	start = ft_strlen(str);
	while (start && ft_strchr(set, str[start]))
		start--;
	s = ft_substr(str, 0, start + 1);
	return (s);
}
