#include <stdlib.h>
#include<stdio.h>

int main (int ac,char **av)
{
    if (ac ==3)
    {
        int n=atoi(av[1]);
        int n2=atoi(av[2]);
        if (n ==0 || n2 == 0)
            printf("0");
        while (n2)
        {
            int tmp =n2;
            n2=n%n2;
            n=tmp;
        }
        printf("%d",n);
    }
    printf("\n");
}
