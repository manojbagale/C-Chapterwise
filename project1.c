#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Project 1: Building a number guessing game.

    int randomNumber;
    srand(time(NULL));
    randomNumber = rand() % 1000;

    time_t startTime = time(NULL);

    int guessNumber, count = 0;
    printf("Guess the number please: ");

    for (;;)
    {
        scanf("%d", &guessNumber);
        count++;

        if (guessNumber > randomNumber)

        {
            printf("Hint: Lower number please! ");
        }
        else if (guessNumber < randomNumber)
        {
            printf("Hint: Higher number please! ");
        }
        else if (guessNumber == randomNumber)

        {
            time_t endTime = time(NULL);

            int elapsedTime = (int)difftime(endTime, startTime);

            printf("Wow! Correct! Here is your result:\n");
            printf("Total guesses: %d\n", count);
            printf("Time taken: %d seconds\n", elapsedTime);

            break;
        }
    }

    return 0;
}