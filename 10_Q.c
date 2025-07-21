#include <stdio.h>

int main() {
    int not_prime = 0;
    int n = 1;

    if (n == 0 || n == 1){
        not_prime = 1;
    }

    else{
        for (int i = 2; i < n; i++){
            if (n % i == 0 && n != 2){
                not_prime = 1;
                break;
            }
        }
    }

    if (not_prime) {
        printf("%d is NOT a Prime Number  ", n);
    }

    else {
        printf("%d is Prime Number  ", n);
    }
    return 0;
}