/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:33:55 by ykalashn          #+#    #+#             */
/*   Updated: 2019/12/16 14:59:44 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_strndup(const char *s1, size_t n)
{
	char	*ptr;
	size_t	i;

	if (!(ptr = (char*)malloc(sizeof(*ptr) * ft_strlen(s1) + 1)))
		return (NULL);
	i = 0;
	if (!ptr)
		return (NULL);
	while (s1[i] && i < n)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static int		ft_new_line(char *rubbish, char **line)
{
	int len;

	len = 0;
	while (rubbish[len] != '\0' && rubbish[len] != '\n')
		len++;
	if (!(*line = ft_strndup(rubbish, len)))
		return (-1);
	if (rubbish[len] == '\n')
		rubbish = ft_strcpy(rubbish, &rubbish[len + 1]);
	else
		rubbish[0] = '\0';
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char	*rubbish[CEILING];
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	ret = 1;
	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (rubbish[fd] == NULL)
			rubbish[fd] = ft_strnew(0);
		tmp = rubbish[fd];
		if (!(rubbish[fd] = ft_strjoin(rubbish[fd], buf)))
			return (-1);
		ft_strdel(&tmp);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (rubbish[fd] == NULL || rubbish[fd][0] == '\0'))
		return (0);
	return (ft_new_line(rubbish[fd], line));
}
