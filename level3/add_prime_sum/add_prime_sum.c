#include<unistd.h>

int ft_atoi(const char *str)
{
    int sign  =1;
    int result =0;
    while (*str && (*str == ' ' || *str == '\t'))
    str++;
    if (*str == '-')
        sign =-1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result =result*10+*str -'0';
        str++;
    }
    return (sign*result);

}
void write_number(int n)
{
    if (n>=10)
        write_number (n/10);
    write (1,&"0123456789"[n%10],1);
} 
int is_prime (int nb)
{
    int  i =3;
    if (nb <= 1)
        return (0);
    if (nb %2==0 && nb>2)
        return (0);
    while (i<(nb/2))
    {
        if (nb%i ==0)
            return 0;
        i=i+2;
    }
    return 1;
}
int main (int ac ,char **av)
{
    int nb ;
    int sum = 0;
    if (ac == 2)
    {
        nb =ft_atoi(av[1]);
        while (nb>0)
            if (is_prime (nb --))
                sum += nb+1;
            write_number (sum);   
    }
    if (ac != 2)
        write_number (0);
    write (1,"\n",1);

}