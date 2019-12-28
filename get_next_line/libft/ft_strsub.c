/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:52:00 by ykalashn          #+#    #+#             */
/*   Updated: 2019/11/13 14:43:41 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*fresh;

	i = 0;
	if (!(fresh = (char *)malloc(sizeof(*fresh) * len + 1)))
		return (NULL);
	while (i < len)
	{
		fresh[i] = s[start];
		start++;
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
