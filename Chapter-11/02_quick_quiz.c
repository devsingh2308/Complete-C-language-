#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 5;
    float* ptr;
    scanf("%d", &n);
    ptr = (float*) malloc(n * sizeof(float));
    

    ptr[0] = 3;
    ptr[1] = 6;
    ptr[2] = 56;
    ptr[3] = 36;
    ptr[4] = 67;

    printf("%f \n", ptr[0]);
    printf("%f \n", ptr[1]);
    printf("%f \n", ptr[2]);
    printf("%f \n", ptr[3]);
    printf("%f \n", ptr[4]);
    return 0;
}