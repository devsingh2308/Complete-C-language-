/*#include<stdio.h>

int main() {
   int a ;
   scanf("%d" , &a);
   printf("The value of a is %d" , a);
   return 0;
}*/


#include <stdio.h>

int main() {
    int a ;
    scanf("%d" , &a);
    
    int b;
    scanf("%d", &b);
    
    int area = a * b;
    
    printf("Area of rectangle is %d" , area);
    

    return 0;
}