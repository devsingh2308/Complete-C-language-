#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 10;
    int*ptr ;

    ptr = (int*)malloc(n* sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i + 1); // Initialize with some values
    }


    printf("The Array is: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    
    n =15;
    ptr = (int*)realloc(ptr, n * sizeof(int));

    for (int i = 10; i < n; i++)
    {
        ptr[i] = 7*(i + 1); 
    }

    printf("The Array is: ");


    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}