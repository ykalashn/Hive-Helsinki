/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:27:37 by ykalashn          #+#    #+#             */
/*   Updated: 2019/11/13 16:13:28 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *s1;
	char *s2;

	if (len == 0 || dst == src)
		return (dst);
	s1 = (char*)dst;
	s2 = (char*)src;
	if (s1 > s2)
	{
		while (len-- > 0)
			*(s1 + len) = *(s2 + len);
	}
	else
	{
		while (len-- > 0)
			*s1++ = *s2++;
	}
	return (dst);
}
