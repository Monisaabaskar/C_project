#include <stdio.h>
#include <stdlib.h>

int min_3 (int a, int b, int c);

int main (int argc , char *argv[])
{
    if(argc == 4)
    {
        long a = strtol(argv[1], NULL, 10);
        long b = strtol(argv[1], NULL, 10);
        long c = strtol(argv[1], NULL, 10);
    

        printf("minimum number:%d\n", min_3(a,b,c));
    }

    else
    {
        printf("no command line\n");
    }
    return 0;
}



int min_3 (int a, int b, int c)
{
    if(a < b)
    {
        if(a < c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }

    else
    {
        if(b < c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
        
    
}