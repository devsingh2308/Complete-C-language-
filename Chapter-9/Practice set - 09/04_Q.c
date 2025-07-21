#include <stdio.h>

typedef struct vector {
    int real;
    int imaginary;
} Complex;

int main(){
    Complex c = {1, 2};

    printf("The value of Complex is %d + i%d\n", c.real, c.imaginary);
    return 0;
}