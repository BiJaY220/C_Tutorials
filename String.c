
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    //char  k[] 
    // char k = {'k','a','b','i','n','\0'};
    char str[] = "bijay";//{'b','i','j','a','y','\0'};
    char *ptr = str;
    printf("the value of ptr is %c\n", *ptr);
    puts(str);
    ptr = ptr +1;
    printf("the value of ptr is %c\n", *ptr);
    ptr = ptr + 2;// now ptr is pointing to the 3rd element of the string
    printf("the value of ptr is %u\n", ptr);//%u is used to print the address
    printf("the value at ptr is %c\n", *ptr);
    strcpy(str,"jonney jonney yes papa");
    puts(str);
    
    

    return 0;//
}   

