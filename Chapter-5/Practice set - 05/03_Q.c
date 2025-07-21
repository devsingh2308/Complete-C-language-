#include <stdio.h>

float force(float);


float force(float m ) {
    return m*9.8;
}



int main(){
    float m = 2 ;
    printf("Force : %.2f", force(m));
    return 0;
}