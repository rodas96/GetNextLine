/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:56:42 by rmorais           #+#    #+#             */
/*   Updated: 2022/12/27 16:59:10 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	while (buffer[0] != '\0' || read(fd, buffer, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buffer);
		if (ft_bufferclean(buffer) == true)
			break ;
		if (read(fd, buffer, 0) < 0)
		{
			free(line);
			return (NULL);
		}
	}
	return (line);
}


/* int main()
{
	int	fd;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free (line);
		line = get_next_line(fd);
	}
	close (fd);
} */