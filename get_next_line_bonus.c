/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:35:56 by rmorais           #+#    #+#             */
/*   Updated: 2022/12/22 19:44:47 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE < 1 || FOPEN_MAX < fd)
		return (NULL);
	while (buffer[fd][0] != '\0' || read(fd, buffer[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buffer[fd]);
		if (ft_bufferclean(buffer[fd]) == true)
			break ;
		if (read(fd, buffer[fd], 0) < 0)
		{
			free(line);
			return (NULL);
		}
	}
	return (line);
}
