#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("the vlaue of argc is %d\n", argc);
    int i;
    for(i=0; i<argc; i++)
    {
        printf("this argument at index number %d has value of %s\n", i, argv[i]);
    }

    
}
