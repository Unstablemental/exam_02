#include<stdlib.h>
#include<stdio.h>
int *ft_rrange(int start,int end)
{
    int *t;
    int len =0;
    int i =0;

    len =end-start+1;
    if (len<0)
        len =len*-1;
    t=(int *)malloc (len *sizeof(int));
    if (!t)
        return (0);
    while (i<len)
    {
        if (end<start)
        {
            t[i]=end;
            end++;
        }
        else   
        {
            t[i] = end;
            end--;
        }
        i++;
    }
    return (t);
}
