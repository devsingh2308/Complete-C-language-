#include <stdio.h>

int main(){
    int age = 17;

    if (age>65) {
        printf("You can drive and you are senior citizen");
    }
    else if (age>40) {
        printf("You can drive and you are elder");
    }
    else if (age>18) {
        printf("You can drive");
    }
    else {
        printf("You cannot drive");
    }
    return 0;
}