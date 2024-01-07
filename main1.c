#include "get_next_line.h"

int main()
{
   int fd = open("oussama.txt",O_RDONLY);
   char *line = get_next_line(fd);
    printf("%s",line);
    free(line);
    close(fd);
   int fd1 = open("oussama1.txt",O_RDONLY);
   char *str = get_next_line(fd1);
    printf("%s",str);
    free(str);
    close(fd1);
    return 0;
}