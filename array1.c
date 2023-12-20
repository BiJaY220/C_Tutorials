#include <stdio.h>
int func1(int arr[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("the value of element %d is %d\n", i, arr[i]);
    }
    arr[0] = 382;
    //return 0;
}
void func2(int *ptr){
    for (int i = 0; i < 6; i++)
    {
        printf("the value of element %d is %d\n", i, *(ptr+i));//*(ptr+i) == arr[i]
    }
    *(ptr+2) = 182;
}


int main(int argc, char const *argv[])
{
    int arr[] = {12, 23, 34, 4, 5, 6};
    //int a =3;
    //int *ptr = &a;
    int *arrayptr = arr;//&arr[0] *arrayotr == arr[0]
    func1(arr);

    printf("the value of arr[0] is %d\n", arr[0]);
    func2(arrayptr);
    printf("the value of arr[2] is %d\n", arr[2]);

    return 0;
}
