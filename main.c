#include "get_next_line_bonus.h"

int main()
{
   int fd = open("oussama.txt",O_RDONLY);
   int fd1 = open("oussama1.txt",O_RDONLY);
    
    char *l = get_next_line(fd);
    printf("%s",l);

    char *l1 = get_next_line(fd1);
    printf("%s",l1);
}

