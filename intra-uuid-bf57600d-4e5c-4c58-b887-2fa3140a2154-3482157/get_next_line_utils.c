/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 17:58:21 by ashakhky          #+#    #+#             */
/*   Updated: 2021/03/20 17:59:11 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*join_str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(join_str = malloc(sizeof(*s1) * len + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		join_str[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
	{
		join_str[i++] = s2[j++];
	}
	join_str[i] = 0;
	return (join_str);
}

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	char	*s1_cpy;
	int		i;
	int		size;

	i = 0;
	size = 0;
	s1_cpy = (char*)s1;
	while (s1_cpy[size])
		size++;
	if (!(cpy = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (s1_cpy[i])
	{
		cpy[i] = s1_cpy[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strchr(const char *s, int c)
{
	char	*string_cpy;

	string_cpy = (char*)s;
	while (*string_cpy != c)
	{
		if (*string_cpy == '\0')
			return (NULL);
		string_cpy++;
	}
	return (string_cpy);
}
