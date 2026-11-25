#include "../get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		i;
	int		fd;
	char	*line;

	i = 1;
	fd = 0;
	line = NULL;
	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
		return (perror("open"), 1);
	printf("\033[1;01m\\______\033[0m \033[1;32mTEST\033[0m \033[1;01m______/\033[0m\n");
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("\n\033[1;01m|- Line %d : \033[0m", i);
		printf("\033[37m%s\033[0m", line);
		line = get_next_line(fd);
		i++;
	}
	free(line);
	close(fd);
	printf("\n\033[1;01m|-[\033[0m \033[0m \033[1;32mTESTS COMPLETE\033[0m \033[1;01m]-|\033[0m\n");
	printf("\n");
	return (0);
}
