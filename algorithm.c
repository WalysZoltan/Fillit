int     collision_check(int *a, int len_a,  int *b, int len_b)
{
    int     len;
    int     i;
    int     j;
    int     s = sizeof(&a);
    int     ss = sizeof(a[0]);
    len = (int)(sizeof(a) / sizeof(a[0]));
    i = 0;
    while (i < len - 1)
    {
        j = 0;
        while (j < 7)
        {
            if (a[i] == b[j] && a[i + 1] == b[j + 1])
                return (-1);
            j = j + 2; 
        }
        i = i + 2;   
    }
    return (1);  
}

