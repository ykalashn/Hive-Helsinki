/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:27:45 by ykalashn          #+#    #+#             */
/*   Updated: 2019/11/13 14:25:15 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countint(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n / 10)
	{
		n /= 10;
		i++;
	}
	if (n < 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char	*buffer;
	int		i;
	int		size;

	i = 0;
	size = ft_countint(n);
	if (!(buffer = ft_strnew(size)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	buffer[0] = 48;
	if (n < 0)
	{
		buffer[i] = '-';
		n = -n;
	}
	i = size - 1;
	while (n > 0)
	{
		buffer[i] = n % 10 + 48;
		n = n / 10;
		if (i > 0)
			i--;
	}
	return (buffer);
}
