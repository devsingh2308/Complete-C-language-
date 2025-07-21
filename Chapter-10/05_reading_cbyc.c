#include <stdio.h>

int main(){
    char ch;
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    while (1) {
        ch = fgetc(ptr);
        printf("%c", ch);
        if (ch == EOF) {
            break; // Exit the loop when end of file is reached
        }
       
    }

    
    return 0;
}