#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    ptr = fopen("text.txt", "r");
    char string[34];
    fputs("this is me", ptr);
    fgets(string, 34, ptr);
    printf("the string is %s\n", string);
    fclose(ptr);
    


    
}
