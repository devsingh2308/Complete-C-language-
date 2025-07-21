#include <stdio.h>

int main(){
    int a = 4, b=78, c=45, d=46;
    
    if (a>b && a>c && a>d) {
        printf("The Greatest of all is %d", a);
    }
    else if (b>a && b>c && b>d) {
        printf("The Greatest of all is %d", b);
    }
    else if (c>a && c>b && c>d) {
        printf("The Greatest of all is %d", c);
    }
    else if (d>a && d>c && d>b) {
        printf("The Greatest of all is %d", d);
    }

    return 0;
}