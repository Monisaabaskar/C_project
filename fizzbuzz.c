#include<stdio.h>

void print(int n);

int main(void)
{

int n = 15;

print(n);

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