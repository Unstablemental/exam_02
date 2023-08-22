#include<unistd.h>
#include<stdlib.h>
void write_hex(int i)
{
    if (i>=16)
        write_hex(i/16);
    write(1,&"0123456789abcdef"[i%16],1);
}
int main (int ac,char **av)
{
    if (ac ==2)
    {
        write_hex(atoi(av[1]));
    }
    write(1,"\n",1);
}