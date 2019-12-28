/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:51:00 by ykalashn          #+#    #+#             */
/*   Updated: 2019/10/16 12:52:13 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			ft_putstr(argv[i]);
		}
		return (0);
	}
}
