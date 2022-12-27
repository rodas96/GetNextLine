/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:31:19 by rmorais           #+#    #+#             */
/*   Updated: 2022/12/27 17:08:34 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
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