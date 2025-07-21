#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // Seed the random number generator
    int player, computer = rand() % 3;

    /*
    0 -> Snake
    1 -> Water
    2 -> Gun
    */

    printf("Choose 0 for Snake, 1 for Water and 2 for Gun \n");
    scanf("%d", &player);
    printf("Computer chose %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("It's a tie! Both chose Snake.\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Won !\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You loose!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You loose! \n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("It's a tie! Both chose Water.\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win! \n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Win! \n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You loose!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("It's a tie! Both chose Gun.\n");
    }
    else
    {
        printf("Invalid input. Please choose between 0, 1, or 2.\n");
    }

    return 0;

}