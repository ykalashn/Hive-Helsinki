/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 16:34:03 by ykalashn          #+#    #+#             */
/*   Updated: 2019/10/28 16:28:24 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t sum;
	size_t i;
	size_t j;

	sum = 0;
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[sum])
		sum++;
	if (dstsize <= i)
		sum = sum + dstsize;
	else
		sum = sum + i;
	while (src[j] && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (sum);
}
