/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:34:39 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/02 15:56:37 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(long n)
{
	int	size;

	size = 1;
	while (n / 10)
	{
		n /= 10;
		size++;
	}
	if (n < 0)
		size++;
	return (size);
}

static long	ft_getunit(long n, int unit)
{
	while (unit--)
		n /= 10;
	return (n % 10);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		j;
	long	nbr;

	nbr = (long) n;
	i = 0;
	j = ft_nbrlen(nbr);
	res = ft_calloc(sizeof(char), (j + 1));
	if (!res)
		return (NULL);
	if (nbr < 0)
	{
		res[i] = '-';
		i++;
		nbr *= -1;
	}
	while (j - i)
	{
		res[i] = '0' + ft_getunit(nbr, j - i - 1);
		i++;
	}
	res[i] = '\0';
	return (res);
}
