#include <stdio.h>

int str_len(char *str);
int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        printf("str_len: %d\n", str_len(argv[1])); // print the function call to know what the func return using the cmd
        printf(" %s\n", argv[1]); //print the i/p of string length 
    }
    return 0;
}

int str_len(char *str)
{
    int i = 0;
    if(str != NULL)
    {
        while(*str++) i++; // for(;*str !='\0'; i++ ,str++)
     
        return i;
    }
    else
    {
        return -1;
    }
}