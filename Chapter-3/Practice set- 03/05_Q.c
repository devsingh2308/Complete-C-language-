#include <stdio.h>

int main(){
    char ch = 'D';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);

    if(ch >=97 && ch<=122) {
        printf("This character is lowercase\n");
    }
    else {
        printf("This character not is lowercase\n");
    }
    return 0;
}
