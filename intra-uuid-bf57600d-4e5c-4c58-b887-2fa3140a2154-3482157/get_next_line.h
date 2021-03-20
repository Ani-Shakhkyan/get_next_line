/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 17:57:55 by ashakhky          #+#    #+#             */
/*   Updated: 2021/03/20 18:00:06 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

int					get_next_line(int fd, char **line);
char				*ft_strjoin(char const *s1, char const *s2);

size_t				ft_strlen(const char *s);

char				*ft_strdup(const char *s1);
char				*ft_strchr(const char *s, int c);

#endif
