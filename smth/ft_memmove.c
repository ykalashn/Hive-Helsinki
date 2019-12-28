/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:27:37 by ykalashn          #+#    #+#             */
/*   Updated: 2019/10/25 19:36:43 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s1;
	const char	*s2;
	char		*temp;
	int			i;

	s1 = (char*)dst;
	s2 = (char*)src;
	temp = (char*)malloc(len);
	i = 0;
	while (i < (int)len)
	{
		temp[i] = s2[i];
		i++;
	}
	i = 0;
	while (i < (int)len)
	{
		s1[i] = temp[i];
		i++;
	}
	return (dst);
}
