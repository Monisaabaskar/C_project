#include <stdio.h>

int min_3 (int a, int b, int c);

int main (void)
{
    int x = 10;
    int y = 8;
    int z = 3;

    printf("minimum number:%d\n", min_3(x,y,z));

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