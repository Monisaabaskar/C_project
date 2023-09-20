#include <stdio.h>
#include <stdlib.h>

int rev(int num);
int main (int argc , char *argv[])
{
    if(argc == 2)
    {
        long num = strtol(argv[1], NULL, 10);
        printf("reverse number: %d\n", rev(num));
    }
    else
    {
        printf("no command line\n");
    }

    return 0;
}

int rev(int num)
{
    //find num of digits
    int rev = 0;

    if (num != 0)
    {
        int i = 0;
        for(; num != 0 ; i++)
        {
            int rem = num % 10;
            rev = ((rev * 10) + (rem));
            num = num/10;
        }
    }
    return rev;
     
}