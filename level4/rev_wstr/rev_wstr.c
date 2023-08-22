#include<unistd.h>
#include<stdlib.h>


int main (int ac,char **av)
{
    int start;
    int end;
    int i ;
    int len;

    if (ac ==2)
    {
        while (av[1][i])
        i++;
        while (i>=0)
        {
            while  (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\0')
            i--;
            end =i;
            while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t' )
            i--;
            start =i+1;
            len =start;
            while (start<=end)
            {
                    write (1,&av[1][start],1);
                    start ++;
            }
            if (len)
            write (1," ",1);
            i--;
        }
    }
    write (1,"\n",1);       
}