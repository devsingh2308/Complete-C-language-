#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("harry.txt", "a");
    // char c = fgetc(ptr);
    // printf("%c\n", c);

     fputc('c', ptr); // This line would cause an error since ptr is opened in read mode
    return 0;
}