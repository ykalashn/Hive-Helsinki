/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:41:56 by ykalashn          #+#    #+#             */
/*   Updated: 2019/11/07 10:24:31 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	i;

	i = 0;
	if (!(fresh = (char *)malloc(sizeof(*fresh) * (ft_strlen(s1) \
						+ ft_strlen(s2) + 1))))
		return (NULL);
	while (*s1)
		fresh[i++] = *s1++;
	while (*s2)
		fresh[i++] = *s2++;
	fresh[i] = '\0';
	return (fresh);
}
