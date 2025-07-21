#include <stdio.h>

typedef struct vector {
    int real;
    int imaginary;
} Complex;

void display(Complex c) {
    printf("The value of Complex is %d + i%d\n", c.real, c.imaginary);
}

int main(){
    Complex carr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part : ");
        scanf("%d", &carr[i].real);
        
        printf("Enter imaginary part : ");
        scanf("%d", &carr[i].imaginary);

        display(carr[i]);

    }

    return 0;
}

    