#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
FILE *ptr = NULL;
ptr = fopen("text.txt", "a");
char string[74]="here is the text for the file";
// char c = fgetc(ptr);
// printf("the character I read was %c\n", c);
//reading operation

// fsacnf(ptr, "%s", string);
// printf("the string is %s\n", string);

//writing operation
fprintf(ptr, "%s", string);
printf("the string was written\n");


    





}
