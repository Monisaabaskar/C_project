#include <stdio.h>

float area(int radius, int height);

int main(void)
{
    int radius = 2;
    int height = 8;
    printf("%.1f\n", area(radius, height));

    return 0;

}



float area(int radius, int height)
{
    float pi = 22.7;
    float area = 1;

    area = (2 * pi * radius*(radius + height));
    return area;
}

                                                                                                                                                 
