
#include "stdio.h"
#include <fcntl.h>
#include <stdlib.h>
#include "fillit.h"

//#include "fillit.h"
t_tetris	*ft_create_node(t_tetris *list, int *a, char c)
{
	t_tetris	*tmp;

	tmp = (t_tetris*)malloc(sizeof(t_tetris));
	if (tmp == NULL)
		printf("error");
    //print_mas(a, 8);
	tmp->tet_id = a;
	tmp->c = c;
	tmp->next = list;
	return (tmp);
}

void	ft_print_list(t_tetris *list)
{
    int     i;
    int     *a;

    i = 0;
	while (list)
	{
        i = 0;
        a = list->tet_id;
        /*printf("before printing list ");
        print_mas(list->tet_id, 8);*/
        while (i < 8)
        {
		    printf("%d ", a[i]);
            i++;
        }
        printf("\n%c\n", list->c);
		list = list->next;
	}
}

int				main(void)
{
	int			a[8] = {0,0,0,1,0,2,0,3};
	int			b[8] = {1,0,1,1,1,2,1,3};
	char 			c = 'A';
	char 			d = 'B';
	t_tetris		*test;

	test = NULL;
	test = ft_create_node(test, a, c);
	//printf("%d\n", test->tet_id[2]);
	//printf("%c\n", test->c);
	//printf("%s\n", b);
	test = ft_create_node(test, b, d);
	//printf("%d\n", test->tet_id[2]);
	//printf("%c\n", test->c);
	ft_print_list(test);
	return (0);
}