/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 10:41:44 by ykalashn          #+#    #+#             */
/*   Updated: 2019/10/30 11:14:24 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t count;
	size_t j;

	i = 0;
	count = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && i < len)
		{
			++i;
			++j;
			++count;
		}
		if (needle[j] == '\0')
			return ((char*)haystack + i - count);
		else
			i++;
	}
	return (NULL);
}
