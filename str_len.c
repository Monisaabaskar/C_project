#include <stdio.h>

int str_len(char str[]);

int main(void)
{

    char *name = "monisha";

    printf("length: %d\n ", str_len(name));

    printf("length: %d\n ", str_len(""));

   return 0;
}

int str_len(char *str)
{
    if(str_len != NULL)
    {
        int i = 0;
        for(; str[i] != '\0'; i++ );

        return i;
    }

    else
    {
        return -1;
    }
    
}