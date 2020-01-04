#ifndef FILLIT_H
# define FILLIT_H
#include "get_next_line.h"
#include "libft.h"
int		read_one(const int fd, char *line);
void	ft_exit(void);
int		h_count(char *line);
int		chk_char(char *line);
int		pre_read(const int fd);
void        shift(int   *a);
void    final_check(int *a);
int     me(int *a, int b[8]);
typedef struct  s_tetris
{
    int                 *tet_id;
    char                c;
    struct s_tetris     *next;
}                       t_tetris;
# define I (int[8]) {0,0,1,0,2,0,3,0}
# define I90 (int[8]) {0,0,0,1,0,2,0,3}
# define O (int[8]) {0,0,0,1,1,0,1,1}
# define L (int[8]) {0,0,1,0,2,0,2,1}
# define L90 (int[8]) {1,0,1,1,1,2,0,2}
# define L180 (int[8]) {0,0,0,1,1,1,2,1}
# define L270 (int[8]) {0,0,0,1,0,2,1,0}
# define J (int[8]) {0,1,1,1,2,1,2,0}
# define J90 (int[8]) {0,0,0,1,0,2,1,2}
# define J180 (int[8]) {0,0,0,1,1,0,2,0}
# define J270 (int[8]) {0,0,0,1,0,2,1,2}
# define T (int[8]) {0,0,0,1,0,2,1,1}
# define T90 (int[8]) {0,0,1,0,1,1,2,0}
# define T180 (int[8]) {0,1,1,0,1,1,1,2}
# define T270 (int[8]) {0,1,1,0,1,1,2,1}
# define S (int[8]) {0,1,0,2,1,0,1,1}
# define S90 (int[8]) {0,0,1,0,1,1,2,1}
# define Z (int[8]) {0,0,0,1,1,1,1,2}
# define Z90 (int[8]) {0,1,1,0,1,1,2,0} 
#endif