#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    switch(a)
    {
        case 1:
            printf("The number is 1 and day is sunday\n");
            
        case 2:
            printf("The number is 2 and day is monday\n");
        case 3:
            printf("The number is 3 and day is tuesday\n");
            break;
        case 4:
            printf("The number is 4 and day is wenesday\n");
            break;
        case 5:
            printf("The number is 5 and day is thursday\n");
            break;
        default:
            printf("invalid number for our cases!\n");
            break;
    }
}
