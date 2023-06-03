#include "get_next_line.h"

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("1char.txt", O_RDONLY);
	line = get_next_line(fd);
		printf("line 1 content:\n%s\n", line);
    free(line);
	printf("------------------------------------------\n\nReading second line:\n");
		line = get_next_line(fd);
	if (line)
		printf("\nline 2 content:\n%s\n", line);
	else
		printf("NULL\n");
	free(line);
	printf("------------------------------------------\n\nReading third line:\n");
	line = get_next_line(fd);
	if (line)
		printf("\nThird line: \n%s\n", line);
	else
		printf("NULL\n");
	free(line);
	printf("------------------------------------------\n\nReading empty line:\n");
	line = get_next_line(fd);
	if (line == NULL)
		printf("\nCONGRATS! YOU'VE READ A FILE\n");
	else
		printf("\nSomething's wrong in the end: \n%s\n", line);
	free(line);
	return (0);
}