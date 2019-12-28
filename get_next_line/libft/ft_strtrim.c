/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:27:37 by ykalashn          #+#    #+#             */
/*   Updated: 2019/11/13 14:52:37 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*fresh;
	size_t			len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	while (s[i] && s[i + 1])
		i++;
	while (i > 0 && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		len--;
		i--;
	}
	i = 0;
	while (len > 0 && s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		i++;
		len--;
	}
	if (!(fresh = (char *)malloc(sizeof(*fresh) * len + 1)))
		return (NULL);
	fresh = ft_strsub(s, i, len);
	return (fresh);
}
