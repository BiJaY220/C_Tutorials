#include   <stdio.h>
#include <stdlib.h>
int access(int *a)
{
    *a = 45;
    return *a;
}
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return *a, *b;
}

int main(int argc, char const *argv[])
{
    int a;
    printf("enter the value of a");
    scanf("%d", &a);
    access(&a);
    int b = 23, c = 87;
    swap(&b, &c);
    printf("the value of a is %d\n", access(a));
    printf("the value of b is %d\n", b);
    printf("the value of c is %d\n", c);
    

    return 0;
}
