#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 6;
    int*ptr ;

    ptr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }


    printf("The Array is: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    
    n =10;
    ptr = (int*)realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The Array is: ");


    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}