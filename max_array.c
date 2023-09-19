#include <stdio.h>

int max(int array[], int len);

int main(void)
{
    int ele[] = {13, 9, 16, 78, 100};
    int len = 5;

    printf("maximum : %d\n" ,max(ele , len));

    return 0;
}

int max(int array[], int len)
{
    int max = array[0];
    int i = 1;

    for(; i < len ; i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }

    return max;
}