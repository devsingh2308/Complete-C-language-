#include <stdio.h>
#include <stdlib.h>

int main(){
    int n ;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    // int arr[n]; // This line is not valid in C

    ptr[0] = 3;
    ptr[1] = 6;
    printf("%d %d\n", ptr[0], ptr[1]);
    return 0;
}