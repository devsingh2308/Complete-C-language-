#include <stdio.h>

int main(){
    
    if (1) {
        printf("This if is executed!\n");
    }
    if (6315) {
        printf("This if is also executed!\n");
    }
    if (1.74) {
        printf("This if is also executed!\n");
    }
    if ('c') {
        printf("This if isalso  executed!\n");
    }
    if (0) {
        printf("This if is also executed!\n");  // This code is not executed 
    }
    return 0;
}