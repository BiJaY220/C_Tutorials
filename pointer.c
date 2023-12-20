#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a= 3;



    int *ptra = &a; //just ptra is a pointer variable which stores the address of a but *prta is a pointer variable which stores the value of a
    printf("the value of a is %d\n", a);
    printf("the value of a is %d\n", *ptra);
    printf("the address of a is %d\n", &a);//that memory address where a is stored
    printf("the address of ptra is %d\n", ptra);//that memory address where a is stored
    ptra++;

    printf("the address of a is %d\n", ptra);
    printf("the address of pointer to a is %d\n", &ptra);
    


}
