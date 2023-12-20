#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    // int *ptr;
    // int n;  
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d", &n);
    // ptr = (int *)malloc(n * sizeof(int)); //memory allocated using malloc
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d of this array is %d\n", i, ptr[i]);
    // }


    //  int *ptr;
    // int n;  
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d", &n);
    // ptr = (int *)calloc(n , n*sizeof(int)); //memory allocated using calloc
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d of this array is %d\n", i, ptr[i]);
    // }
    // free(ptr);
    int *ptr;
    int n;  
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n , n*sizeof(int)); //memory allocated using calloc
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n*sizeof(int)); //memory reallocated using realloc

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }
    free(ptr);

    
    return 0;

}
