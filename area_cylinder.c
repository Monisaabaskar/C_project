#include <stdio.h>
#include <stdlib.h>

float area(int radius, int height);

int main(int argc , char *argv[])
{
    if(argc == 3)
    {   // converting each string argument in main  into long integer argument. So that we can get output into integer//
        long radius = strtol(argv[1], NULL, 10);
        long height = strtol(argv[2], NULL, 10);

        printf("%.2f\n" , area(radius, height));
    }
    else
    {
        printf("Usage: area radius height\n");
    }

    return 0;
}


float area(int radius, int height)
{
    float pi = 3.14f;
    float area = 1;

    area = (2 * pi * radius*(radius + height));
    return area;
}

                                                                                                                                                 
