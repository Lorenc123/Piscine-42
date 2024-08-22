#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFERSIZE 2048
#define DIRCTFILE "numbers.dict"

void    ft_putstr(char *str);
int	ft__atoi(char *str);
int	memo();
int	count_rows(const char filename);

#endif