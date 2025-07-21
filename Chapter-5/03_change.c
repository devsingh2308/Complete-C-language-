#include <stdio.h>


// Function prototype
int sum(int , int);

// Function definition
int sum(int x , int y) {
   // printf("The sum is %d\n", x+y);
   return x+y;
}


int main(){
    int a=1;
    int b=2;

    int c= sum(a, b);
    printf("Sum of the numbers is %d \n" , c);

    int d=23;
    int e=45;

    int f = sum(d, e);
    printf("Sum of the numbers is %d \n", f);

    return 0;
}