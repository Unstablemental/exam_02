#include<unistd.h>
void write_number(int n)
{
    if (n>=10)
        write_number(n/10);
    write(1,&"0123456789"[n%10],1);
}
int ft_atoi (char *s)
{
    int sign =1;
    int res=0;
    while (*s && (*s == ' ' || *s == '\t'))
    s++;
    if (*s =='-')
        sign=-1;
    if (*s =='-' || *s == '+')
        s++;
    while (*s>='0' && *s <='9')
    {
        res=res*10+*s-'0';
        s++;
    }
    return (sign*res);

}
int main (int ac,char **av)
{
    int n;
    int i =1;
    if (ac ==2)
    {
        n=ft_atoi(av[1]);
        while (i<=9)
        {
         write_number(i);
         write(1," x ",3);
         write_number(n);
         write(1," = ",3);
         write_number(n*i);
         write(1,"\n",1);
        i++;
        }
    }else
    write(1,"\n",1);
}