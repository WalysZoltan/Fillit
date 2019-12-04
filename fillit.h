#ifndef FILLIT_H
# define FILLIT_H
#include "get_next_line.h"
#include "libft.h"
int		read_one(const int fd, char *line);
void	ft_exit(void);
int		h_count(char *line);
int		chk_char(char *line);
int		pre_read(const int fd);

typedef struct  s_tetris
{
    int                 *tet_id;
    char                c;
    struct s_tetris     *next;
}                       t_tetris;
#endif