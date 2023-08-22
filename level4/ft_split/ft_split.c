#include<stdlib.h>
#define W_L 1000
#define W_C 1000

char **ft_split(char *str)
{
    int i =0;
    int j=0;
    int k;
    char **t ;

    t=malloc (W_C*sizeof(char *));
    if (!t)
        return (NULL);
    while (str[i] && (str[i] == ' ' || str [i] == '\n' || str [i] == '\t'))
        i++;
    while (str[i])
    {
        if (str[i] != ' ' && str [i] != '\n' && str [i] != '\t')
        {
            k=0;
            t[j] = malloc (W_L *sizeof(char));
            if (!t)
                return (NULL);
            while (str[i] && str[i] != ' ' && str [i] != '\n' && str [i] != '\t')
            {
                t[j][k] = str[i];
                k++;
                i++;
            }
            t[j][k]=0; 
            j++;
        }
        else 
            i++;
    }
    t[j]=0;
    return (t);
}
