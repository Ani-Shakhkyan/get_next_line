#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>

char *is_newline(char *str)
{
	size_t a;

	a = 0;
	while(*(str + a))
	{
		if(*(str + a) == '\n')
			return (str + a);
		++a;
	}
	return (NULL);
}


int  get_next_line(int fd, char **line)
{
	static char *remaining;
	char *buf;
	int indicator;
	char *nl;
	int i;

	i = 0;
	if (fd < 0 || !line || ((BUFFER_SIZE + 1) <= 0))
		return (-1);
	if (!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while((indicator = read(fd, buf, BUFFER_SIZE + 1)) > 0)
	{

	write(1, "Hello", 1);
		buf[indicator] = '\0';
		if(is_newline(buf))
		{
			while(buf[indicator] != '\n')
			{
				remaining[i] = buf[--indicator];
				i++;
			}
			i = 0;
			*line[i + 1] = '\0';
			while(indicator >= 0){
				*line[i++] = buf[indicator--];
			}
			if(*line)
			{
				return 1;
			}
			free(buf);
		}		
	}
	return (1);	
}

int		main()
{
	int	fd;
	char *line;
	fd = open("./text.txt", O_RDONLY);
	get_next_line(fd, &line);
}
