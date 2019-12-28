/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 19:52:44 by ykalashn          #+#    #+#             */
/*   Updated: 2019/11/13 17:17:47 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *c)
{
	int negpos;
	int i;
	int res;

	i = 0;
	negpos = 1;
	res = 0;
	while (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == '\v' || \
			c[i] == '\f' || c[i] == '\r')
		i++;
	if (c[i] == 45 || c[i] == 43)
	{
		if (c[i] == 45)
			negpos = -1;
		i++;
	}
	if (!(c[i] > 47 && c[i] < 58))
		return (0);
	while (c[i] && c[i] > 47 && c[i] < 58)
	{
		res = res * 10 + c[i] - 48;
		i++;
	}
	return (negpos * res);
}
