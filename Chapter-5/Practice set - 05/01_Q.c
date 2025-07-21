#include <stdio.h>

float avg(float, float, float);

float avg (float x, float y, float z) {
    return (x+y+z) / 3;
}

int main(){
    float a = 5;
    float b = 5;
    float c = 5;

    float d = avg(a, b, c);
    printf("The avg of the no. is : %.2f\n", d);
    return 0;
}