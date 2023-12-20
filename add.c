
#include <stdio.h>//preprocessor directive

int main()//function definition\
//function body
{
    //int a, b=8.2323, c;
    //size of int is 4 bytes or 32 bits 
    float n = 3.33; // float -> data type 3.33 -> value and double(64bit)-> 8 byte 
    int x = 90;
    double m = 3.445;// x is a variable int -> data type 10 -> value , short(16bit) , long(64bit) , bit 
    int a;
    //float n = (float)x;

    float c= (float)x/a;//type casting -> converting one data type to another
    //printf("the value of c is %f\n", c);
    //int v = x%a;
    c+=a;//c = c + a
    //printf("the value of v is %d\n", v); 

    int b;//==, = 

    /*printf("the number is %d\n", x); 
    return 0;//if the program is executed successfully
    printf("the number is %f\n", n); 
     printf("THE SIZE OF long IS %d\n", sizeof(long));
    operators -> +, -, *, /, %, =, ==, >, <, >=, <=, ++, --, +=, -=, *=, /=, %=, &&, ||, !
    arthematic operators -> +, -, *, /,  %        
    relational operators -> ==, >, <, >=, <=   = and == shows relation between two variables
    assignment operators -> =, +=, -=, *=, /=, %= -> += -> a = a + 1,,,  a-=b -> a = a - b
    logical operators -> &&, ||, ! -> && -> and, || -> or, ! -> not
     if(a>10 && a<20){
        //statements
     } else{}
    //!=
    unary operators -> ++, -- -> a++ -> a = a + 1, a-- -> a = a - 1
    tertiary operators ->  ?: -> a>b ? a : b
    bitwise operators -> &, |, ^, ~, <<, >> */

    printf("Enter two\t numbers\n");//input()
    scanf("%d%d", &a,&b);//&a address of a and &b address of b 
    c =(float) a + b;//sequence of 0 and 1
    printf("Sum of %d and %d is %f\n", a, b, c);//print(f"nscnskac{})
    
}