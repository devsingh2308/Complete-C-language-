#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;


int main(){
    // typedef int Kishan;
    // Kishan a = 78;
    // printf("The value of a is %d\n", a);

    // typedef struct employee Emp;
    Emp e1;
    e1.code = 4511;
    strcpy(e1.name, "Kishan");
    e1.salary = 54.5;
    //printf("%d", (*ptr).code);
    printf("%d %f %s",e1.code, e1.salary, e1.name);
    return 0;
}