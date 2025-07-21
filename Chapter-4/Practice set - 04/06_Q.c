#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;

   /* do
    {
        sum += i;
        i++;
    } while (i<=10);

    printf("The value of first 10 Natural no. is : %d", sum);*/


    for (int i = 0; i <=10; i++)
    {
        sum +=i;
        
    }
    printf("The value of first 10 Natural no. is : %d\n", sum);
                                                                                                                        

    return 0;
}