/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:57:53 by ykalashn          #+#    #+#             */
/*   Updated: 2019/11/12 11:32:00 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	char	*ptr1;
	char	*ptr2;

	if (!(fresh = ft_memalloc((size_t)ft_strlen((char*)s) + 1)))
		return (NULL);
	ptr1 = (char*)s;
	ptr2 = fresh;
	while (*ptr1)
	{
		*(ptr2++) = f(*(ptr1++));
	}
	return (fresh);
}
