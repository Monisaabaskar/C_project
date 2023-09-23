#include <stdio.h>

int str_len(char *str);


int main(int argc , char *argv[])
// we are not allocating new string like in(toupper - we need to change the string completely"DAVID_MALAN" want use the malloc)

{
    if(argc == 2)
    {
        char *s = 0; // invalid pointer ie is null pointer
        //char *s = argv[1];// if the i/p of the func is str and cmd also str, write how many i/p we need in argv[] that also in the function call//
        printf("str_len: %d\n" , str_len(argv[1]));
    }
    
   return 0;
}

int str_len(char *str)
{
    if(str != NULL)
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