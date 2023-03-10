/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:22:28 by rthomas           #+#    #+#             */
/*   Updated: 2022/04/23 20:12:24 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

char					*get_next_line(int fd);
char					*ft_strjoin(char *s1, char *s2);
int						ft_strlen(char *str);
char					*ft_strchr(char *s, int c);
char					*ft_strdup(char *s1);

#endif