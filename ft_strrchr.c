/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:33:43 by tcamargo          #+#    #+#             */
/*   Updated: 2021/05/28 11:00:50 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;

	c = (unsigned char) c;
	i = ft_strlen(str);
	while (i && str[i] != c)
		i--;
	if (str[i] == c)
		return (&str[i]);
	else
		return (NULL);
}
