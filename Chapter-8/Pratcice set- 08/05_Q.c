#include <stdio.h>

int mystrlen(char str[]) {
    int i = 0, count;
    char c = str[i];
    while (c != '\0') {
        c = str[i];
        i++;
    }
    count = i - 1; // Exclude the null terminator
    return count;
}


void mystrcpy(char target[],  char source[]) {
    for (int i = 0; i< mystrlen(source); i++) {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0'; // Null-terminate the target string
}

int main(){
    char source[] = "Kishan";
    char target[30];
    mystrcpy(target, source);
    printf("%s %s\n",source , target);
    return 0;
}