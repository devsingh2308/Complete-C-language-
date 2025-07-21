#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("dev.txt", "r");
    ptr2 = fopen("dev2.txt", "a");
    while (1)
    {
        
        ch = fgetc(ptr);
        // When all the content of a filehas been read break
        if (ch == EOF)
        {
            break;
        }
        else
        {
            
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);

            printf("%c", ch);
        }
    }

    return 0;
}