#include "fillit.h"
#include <stdio.h>

int    max_x(int     *a)
{
    int     i;
    int     max;

    max = 0;
    i = 0;
    while (i < 8)
    {
        if (a[i] > max)
            max = a[i];
        i = i + 2;
    }
    return (max);
}

int    max_y(int     *a)
{
    int     i;
    int     max;

    max = 0;
    i = 1;
    while (i < 8)
    {
        if (a[i] > max)
            max = a[i];
        i = i + 2;
    }
    return (max);
}

void        shift(int   *a)
{
    int     maxx;
    int     maxy;
    int     i;

    maxx = max_x(a);
    maxy = max_y(a);
    i = 0;
    while (i < 8)
    {
        if (i % 2 == 0)
            a[i] = a[i] - maxx;
        else
        {
            a[i] = a[i] - maxy;
        }
        i++;
    }
} 
