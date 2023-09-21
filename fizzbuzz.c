#include<stdio.h>
#include <stdlib.h>

void print(int n);

int main(int argc , char *argv[])
{

    if (argc == 2)
    {
        long n  = strtol(argv[1], NULL, 10);
         print(n);
    }
    return 0;
}

void print(int n)
{
    int i = 1;
    for(; i <= n; i++)
    {
        if((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FIZZ_BUZZ\n");
        }

        else if(i % 3 == 0)
        {
            printf("FIZZ\n");
        }

        else if(i % 5 == 0)
        {
            printf("BUZZ\n");
        }

        else
        {
            printf("%d\n" , i);
        }

    }
}