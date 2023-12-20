#include <stdio.h>
// int recursion(int n)
// {
//     if (n == 1 || n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * recursion(n - 1);
//     }
// }   

//recursion problem 
//when a function calls itself then it is recursion 
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return n-1;//base condn
    }
    else
    {
        return fib(n - 1) + fib(n - 2);//fib(4)+fib(3),1+0+1+1+0,3
    }
}   
int fib_iter(int n)//with iteration 
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n-1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}
//2! = 2*1 , 3! = 3*2*1 , 4! = 4*3!, 5! =5*4! 0!=1, 1!=1, N!=N*(N-1)!->general condn (n-1)! =(n-1)*(n-2)! 4!= 24
int factorial(int num){
    if (num==0 || num==1)
    {
        return 1;//this is a base condn 
    }
    else
    {
        return num*factorial(num-1);// 4*factorial(3), 4*3*factorial(2)  , 4*3*2factorial(1), 4*3*2*1
    }
}

// int fib_iter(int n)//with iteration
//fibo -> 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 base con general condn-> nth = (n-1)th + (n-2)th
int main(int argc, char const *argv[])
{
    int n;  
    printf("Enter the number you want to find the factorial of:\n");
    scanf("%d", &n);
    printf("the calculated factorial of %d is %d\n", n, factorial(n));
    //printf("the calculated factorial of %d is %d\n", n, recursion(n));
    
    printf("the calculated fibonacci of %d with iteration is  %d\n", n, fib_iter(n));
    printf("the calculated fibonacci of %d is %d\n", n, fib(n));
    
    return 0;
}
//recursion -> solve a problem by dividing it im multiple parts , easy to learn and understand, needs two condn one general and base 