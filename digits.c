// count the no.of.digits in a number

#include <stdio.h>
#include <stdlib.h>

int digits(int num);

int main (int argc , char *argv[])
{
    //int num = 96532;
    //printf("number of digits: %d\n", digits(num));
if(argc == 2)
{
    long num = strtol(argv[1], NULL, 10);
    printf("number: %d\n", digits(num));
}
else
{
    printf(" no command line\n ");
}
    return 0;
}

int digits(int num)
{
    if(num == 0)
    {
        return num;
    }
    
    int i = 0;
    for(; num != 0; i++)
    {
        num = num /10;
    }

    return i;
    
}

