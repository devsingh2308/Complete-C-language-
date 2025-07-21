#include <stdio.h>

int main(){
    int product = 1;
    int n = 4;
    int i = 1;

    while (i<=n)
    {
        product *= i;
        i++;
    }
    
    printf("Factorial of NUmber : %d", product);
    return 0;
}