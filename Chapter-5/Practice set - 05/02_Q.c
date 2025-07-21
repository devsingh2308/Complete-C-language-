#include <stdio.h>

float c2f(float);


float c2f(float c) {
    return (1.8 * c) + 32;
}

int main(){
    int c = 32;
    printf("celcius to Fahrenhite : %.2f ", c2f(c));
    return 0;
}