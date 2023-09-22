#include <stdio.h>
#include <stdlib.h>

int find (int array[], int len, int num);

int main(int argc , char *argv[])
{
    if(argc > 3)
    {
        int len = strtol(argv[1], NULL, 10);
        int var = strtol(argv[2], NULL, 10);
        
        int *array = (int*)malloc(len * sizeof(int));
        
        if(array == NULL)
        {
            printf("memory not allocated\n");
        }

        else
        {
            for(int i = 0, j = 3; i < len; i++, j++)
            {
                 array[i] = strtol(argv[j], NULL, 10);
            }
        }

        printf("Index_number: %d\n", find(array, len, var));

        
    }

    return 0;
}

int find (int array[], int len, int num)
{
    int i = 0; 

    for(; i < len; i++)
    {
        if(array[i]== num)
        {
            return i;
        }
    }
}