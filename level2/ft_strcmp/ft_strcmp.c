
#include<stdio.h>

int ft_strcmp(char *s1,char *s2)
{
    int i =0;
    while (s2[i] && s2[i] == s1[i])
        i++;
    return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
    if (argc == 3)
        printf("ft_strcmp(\"%s\", \"%s\") = %d\n", argv[1], argv[2], ft_strcmp(argv[1], argv[2]));
    return(0);
}