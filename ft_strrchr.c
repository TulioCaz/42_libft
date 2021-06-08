/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:33:43 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/08 16:06:58 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	int		i;
	char	*s;

	s = (char *) str;
	c = (unsigned char) c;
	i = ft_strlen(s);
	while (i && s[i] != c)
		i--;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
