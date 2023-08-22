#include<stdio.h>
#include<stdlib.h>

int main (int ac,char **av)
{
    if (ac == 2)
    {
        int n=atoi(av[1]);
        int i =1;
        while (n>=++i)
        {
            if (n%i==0)
            {

            printf("%d",i);
            if (n==i)
                break;
            printf("*");
            n=n/i;
            i=1;
            }
        }
    }
    printf("\n");
}