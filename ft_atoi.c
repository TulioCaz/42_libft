/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:07:37 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/12 11:35:33 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*s;
	int		n;
	int		sign;

	if (!str)
		return ;
	s = (char *) str;
	n = 0;
	sign = 1;
	while (*s == ' ' || *s == '\n' || *s == '\t' || *s == '\r'
		|| *s == '\v' || *s == '\f')
		s++;
	if (*s++ == '-' && ft_isdigit(*(s + 1)))
		sign = -1;
	else if (*s == '+' && ft_isdigit(*(s + 1)))
		s++;
	while (ft_isdigit(*s))
	{
		n *= 10;
		n += *s - '0';
		s++;
	}
	return (n * sign);
}
