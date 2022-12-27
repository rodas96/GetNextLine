/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:56:39 by rmorais           #+#    #+#             */
/*   Updated: 2022/12/22 20:12:55 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>

size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
int		ft_bufferclean(char *str);
char	*get_next_line(int fd);

#endif