#include <stdio.h>
#include<string.h>


typedef struct dursikshya {
    char name[9];
    int id;
    int roll;
    float marks;// properties of the structure


}dur;
//structure acts as a user defined data type
typedef struct cprograming
{
    char name[9];
    int id;
    int roll;
    float marks;// properties of the structure


}cpro;


int main(int argc, char const *argv[])
{
    struct dursikshya s1,s2,s3;
    dur d1,d2,d3;
    struct cprograming;
    cpro c1,c2,c3;
    c1.marks = 23;
    printf("the marks of c1 is %f\n", c1.marks);
    

    
    //s1.name[9]= {'s','a','n','j','a','y','\0'};
    s1.id = 23;
    // s2.name = "bijay";
    s2.id = 23;
    s3.marks = 232;
    //d1.id = 21;

     printf("the name of first student is %s\n", s1.name);
    // printf("the name of second student is %s\n", s2.name);

    printf("the id of first student is %d\n", s1.id);
   // printf("the id of typedef student is %d\n", d1.id);


    return 0;
}
