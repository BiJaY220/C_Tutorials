#include <stdio.h>
int main()
{   //to do some repitative task we use loops
    //int i=1;// for loop , while loop do while loop 
    //condin , initialization , increment or decrement
    
    // while(i<=10)//only c
    // {
    //     printf("%d\n",i);
    //     i++;
    // }
    int j;
    for( j=1;j<=5;j++)//c and c++
    {
        printf("%c\n",'*');
    }
    //do while loop
    // int i =4;
    // do{
    //     printf("%d\n",i);
    //     i--;
    // }while(i>5);//exit control loop

    //nested loops
    for(int i = 0; i <5 ; i++){
        for(int j = 1; j < 6; j++){
            printf("%c",'*');//00 , 01 , 02 , 03 , 04 , 10 , 11 , 12 , 13 , 14 , 20 , 21 , 22 , 23 , 24 , 30 , 31 , 32 , 33 , 34 , 40 , 41 , 42 , 43 , 44
        }
        printf("\n");
    }
   
   


}
