#include<stdlib.h>
int     *ft_range(int start, int end)
{
    int * t;
    int i=0;
    int len =end-start ;
    if (len<0)
        len  =len*-1;
    len =len+1;
    t=malloc (len *sizeof(int));
    if (!t)
        return (0);
    while (i<len)
    {
        t[i]=start;
        if (end<start)
            start--;
        else 
            start++;
        i++;
    }
    return (t);

}