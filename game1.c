// Guess the number game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, rand_num;
    int count = 1;
    srand(time(0));
    rand_num = rand() % 100 + 1;

    printf("Enter your guess number: ");
    scanf("%d", &n);

    while (n != rand_num)
    {
        count++;
        if (n > rand_num)
        {
            printf("\nYou guessed it wrong! Enter smaller number");
            printf("\nEnter your guess number : ");
            scanf("%d", &n);
        }
        else
        {
            printf("\nYou guessed it wrong! Enter larger number");
            printf("\nEnter your guess number : ");
            scanf("%d", &n);
        }
    }

    printf("\nYou guessed in %d attempts", count);

    return 0;
}