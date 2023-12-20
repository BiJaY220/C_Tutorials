#include <stdio.h>  
int sum(int a, int b);//function prototype declaration

void printstar(int n)//2)with arg and without return value
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    printf("\n");
}
void mul(){//3)without arg and without return value
    int x=4,y=5;
    printf("The product is %d\n",x*y);
}
int div(){
    int x=10,y=5;
    //printf("The division is %d\n",x/y);

    return x/y;

    


}

int main()
{
    /* code */
    int a = 4, b = 5;
    int num;
    printf("The sum is %d\n", sum(a,b));//function call
    printf("enter any number:");
    scanf("%d",&num); // Function call
    printstar(num);
    mul();
  
    printf("the division is :%d\n",div());
     // Function call
    return 0;
    
}
int sum(int i, int j)//1)with arg and return value
 
{
    return i+j;//function body

}
//four major types of functions-> 