#include <stdio.h>

int find (int array[], int len, int num);

int main(void)
{
    int element[] = {24, 20, 10, 42, 80};
    int length = 5;
    int var = 42;

    printf("Index_number: %d\n", find(element, length, var));



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