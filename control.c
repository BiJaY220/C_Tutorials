#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number greater than 0\n");
    scanf("%d", &a);
    switch (a>0 ? 2 : a<0 ? -1 : 0)
    {               
    case 2 :
        printf("the number is greater than 0\n");
       break;
    case -1:
        printf("the number is less to 0\n");
        break;
    
    default:
        printf("The number is equal 0\n");
        break;
    }
    return 0;
}
