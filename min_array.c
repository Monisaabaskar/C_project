#include <stdio.h>
#include <stdlib.h>

int min(int array[] , int len);

int main(int argc , char *argv[])
{
    if (argc > 2)
    {
        int len = strtol(argv[1], NULL, 10);

        int *array = (int*)malloc(len * sizeof(int));

        if(array == NULL)
        {
            return -1;
        }
        
        else
        {
            for(int i = 0, j = 2; i < len; i++, j++)
            {
                array[i]= strtol(argv[j], NULL, 10);
            }
        }

        printf("minimum : %d\n" ,min(array, len));

    }
    
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