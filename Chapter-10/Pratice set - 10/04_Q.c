#include <stdio.h>

int main(){
    FILE *ptr;
    char name1[34], name2[34];
    int salary1, salary2;
    ptr = fopen("salary.txt", "w");

    printf("Enter the name of the first employee: ");
    scanf("%s", name1);

    printf("Enter the salary of the first employee: ");
    scanf("%d", &salary1);

    printf("Enter the name of the second employee: ");
    scanf("%s", name2);

    printf("Enter the salary of the second employee: ");
    scanf("%d", &salary2);  

    fprintf(ptr, "%s %d\n", name1, salary1);
    fprintf(ptr, "%s %d\n", name2, salary2);
    return 0;
}