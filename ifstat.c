
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf ("Enter a number:\n");
    scanf("%d", &a); //input from user here & is used to store the value in the memory
    if (5>a>0)//control statement
    {
        printf("The number is greater than 0 less than 5\n");
    
    }else if (10>=a>=5)
    {
        printf("The number is less than 10 greater than 5\n");
    }
    else//default statement
    {
printf("The number is greater than 10 or less than 0\n");
        }
    
    return 0;
}// leap year program   
