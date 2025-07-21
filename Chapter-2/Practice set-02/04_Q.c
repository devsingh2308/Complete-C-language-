#include <stdio.h>

int main(){
    int x = 2; 
    int y = 3; 
    int z = 3; 
    int k= 1;

    float e = 3*x/y - z + k;

    // 6/y -z + k
    // 2-z+k
    //2-3+k
    //-1+k
    //-1+1
    // 0

    printf("The value of e is %f" , e);
    return 0;
}