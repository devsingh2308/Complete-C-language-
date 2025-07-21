#include <stdio.h>

int main(){
    int a = 10;
    int b = 5;
    int c = a+b;

    printf("The value of a is %d and value of b is %d and value of their sum c is %d \n", a , b , c);
    printf("The remainder when a is divided by b is = %d" , a%b);
    return 0;


    // This does not work for exponentiation in C
    //int d = a^b;
}