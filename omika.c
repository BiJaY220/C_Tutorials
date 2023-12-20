#include<stdio.h>//header file
int main()
{int a;
printf("enter an integer: ");
scanf("%d",&a);
if (a>0)
{printf("the number is positive.");}
else if (a==0)
{printf("the number is zero.");}
else
{printf("the number is negative.");}
}