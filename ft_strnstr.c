/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:18:37 by tcamargo          #+#    #+#             */
/*   Updated: 2021/05/28 11:42:11 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str1, char *str2, size_t n)
{
	int	i;
	int	j;

	if (*str2 == '\0')
		return (str1);
	i = 0;
	while (str1[i] != '\0' && i < (int) n)
	{
		j = 0;
		while (str2[j] == str1[i + j] && (i + j) < (int) n)
		{
			j++;
			if (str2[j] == '\0')
				return (&str1[i]);
		}
		i++;
	}
	return (NULL);
}
