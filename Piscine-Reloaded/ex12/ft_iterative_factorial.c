/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:50:00 by ykalashn          #+#    #+#             */
/*   Updated: 2019/10/18 20:45:08 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int f;

	f = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 0 && nb < 13)
	{
		while (--f > 0)
		{
			nb = nb * f;
		}
		return (nb);
	}
	else
		return (0);
}
