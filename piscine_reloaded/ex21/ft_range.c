/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:56:14 by ykalashn          #+#    #+#             */
/*   Updated: 2019/10/16 18:04:11 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *array;

	i = 0;
	if (min >= max)
		return (0);
	while (i < max - min)
		i++;
	if (!(array = (int*)malloc(1 + i * sizeof(int))))
		return (0);
	while (min < max)
	{
		array[i] = max;
		i--;
		max--;
	}
	array[0] = min;
	return (array);
}
