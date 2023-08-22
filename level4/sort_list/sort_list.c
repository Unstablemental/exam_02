#include"list.h"

t_list *sort_list(t_list * lst,int (*cmp)(int,int))
{
    t_list *tmp;
    tmp=lst;
    while (tmp->next)
    {
        if ((*cmp)(tmp->data,tmp->next->data) == 0)
        {
            int swap =tmp->data;
            tmp->data=tmp->next->data;
            tmp->next->data =swap;
            tmp=lst;
        }
        else
            tmp=tmp->next;
    }
    tmp=lst;
}