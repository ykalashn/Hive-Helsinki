/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 17:47:09 by ykalashn          #+#    #+#             */
/*   Updated: 2019/10/25 14:44:52 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*t1;
	const char	*t2;

	t1 = dst;
	t2 = src;
	while (n-- > 0)
		*t1++ = *t2++;
	return (dst);
}
