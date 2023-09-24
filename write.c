#include <unistd.h> // write - 2nd input argument =  address
#include <stdio.h>

int main(void)
{
    char *str = "kenya";
    char *s = str;
    //int len = 0;
    for(; *s != '\0'; s++ )
    {
        write (STDOUT_FILENO, s, 1);
        //len++;
    }

    write(STDOUT_FILENO, "\n", 1);
    write(STDOUT_FILENO, str, 5);
    write(STDOUT_FILENO, s, 5);
    write(STDOUT_FILENO, "\n", 1);

    int array[] = {65, 65, 65, 65, 65};
    int * p = array;
    int len = 5;
    for( int i = 0; i < len; p++, i++) // p = address
    {
        write(STDOUT_FILENO, p, 4); // will print ascii
    }

    return 0;
}