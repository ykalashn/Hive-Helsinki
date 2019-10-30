/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:54:46 by ykalashn          #+#    #+#             */
/*   Updated: 2019/10/29 19:42:10 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ptr;

	ptr = 0;
	while (*s)
	{
		if (*s == c)
			ptr = s;
		s++;
	}
	if (ptr)
		return ((char *)ptr);
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
