/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:56:44 by rmorais           #+#    #+#             */
/*   Updated: 2022/12/22 19:37:48 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		str[i] = s2[j++];
		if (str[i++] == '\n')
			break ;
	}
	str[i] = '\0';
	free (s1);
	return (str);
}

int	ft_bufferclean(char *str)
{
	bool	newline;
	int		i;
	int		j;

	newline = false;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (newline == true)
			str[j++] = str[i];
		if (str[i] == '\n')
			newline = true;
		str[i++] = '\0';
	}
	return (newline);
}
