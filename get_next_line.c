#include <unistd.h>
int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

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
char *is_newline(char *str)
{
	size_t a;

	a = 0;
	while((str + a))
	{
		if((str + a) == "\n");
			return (str + a);
		++a;
	}
	return (NULL);
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
	char *get_line()
{
	static char *read;
	char buf = [BUFFER_SIZE + 1];
	char *boo;
	char *line;

	read(fd, buf, BUFFER_SIZE + 1);
	boo = is_newline(*buf);
	if(boo)
		
}

int  get_next_line(int fd, char **line)
{
	static char *read;
	char *buf;
	char *line;
	read(fd, buf, BUFFER_SIZE)
	

}
