#include <stdio.h>
#include <string.h>

int main(){
    char st[] = "DevPratapSingh";
    char s1[56] = "Dev";
    char s2[56] = " bhai ";
    // printf("%d", strlen(st));

     char target[30];
     strcpy(target, st);  // target now contains "DevPratapSingh"
    // printf("%s %s ", st, target);


    strcat(s1, s2); // s1 now contains "helloharry" <no space in between>
    printf("%s", s1);


    int a = strcmp("far", "ajoke");
    printf("%d", a);

    return 0;
}