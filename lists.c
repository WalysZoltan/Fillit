#include "fillit.h"
#include <stdlib.h>


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

int     main (void)
{
    t_tetris  *list;

    list = NULL;
    list = add_link(list, "toto");
    list = add_link(list, "tata");
    list = add_link(list, "tutu");
    print_list(list);
    return (0);
}


