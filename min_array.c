#include <stdio.h>

int min(int array[] , int len);

int main(void)
{
    int num[] = {3,9,1,0,2,5,8};
    int len = 7;

    printf("minimum : %d\n", min(num, len));


 return 0;   
}


int min(int array[] , int len)
{
    int min = array[0];

    int i = 1;
    for(; i < len ; i++)
    {
        if( min > array[i])
        {
            min = array[i];
        }
    }

    return min;
}