/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:32:20 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/14 18:58:43 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	if (!str1)
		return (NULL);
	if (!str2)
		return ((char *)str1);
	s1_len = ft_strlen(str1);
	s2_len = ft_strlen(str2);
	str = ft_calloc(sizeof(char), (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, str1, s1_len + 1);
	ft_strlcat(str + s1_len, str2, s2_len + 1);
	return (str);
}
