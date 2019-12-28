/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 20:19:23 by ykalashn          #+#    #+#             */
/*   Updated: 2019/11/13 13:09:50 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordc(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static int		ft_ccount(char const *s, char c, unsigned int start)
{
	int count;

	count = 0;
	while (s[start] && s[start] == c)
	{
		count++;
		start++;
	}
	return (count);
}

static char		*ft_mkword(char const *s, char c, unsigned int n, size_t len)
{
	unsigned int i;

	if (s[n] == '\0')
		return (0);
	i = n;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (ft_strsub(s, n, len));
}

char			**ft_strsplit(char const *s, char c)
{
	char			**ptr;
	unsigned int	start;
	size_t			len;
	int				i;

	i = 0;
	start = 0;
	len = 0;
	if (!(ptr = (char **)malloc(sizeof(char *) * (ft_wordc(s, c) + 1))))
		return (NULL);
	while (s[start])
	{
		start += ft_ccount(s, c, start);
		ptr[i] = ft_mkword(s, c, start, len);
		if (i < ft_wordc(s, c))
			start += ft_strlen(ptr[i]);
		if (ptr[i])
			i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
