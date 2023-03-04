#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{         
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a number between 1 to 100 //
    //  printf("the random number is %d\n", number);
    // Keep running the loop until number is guesssed //
    do
    {
        printf("Guess the numbers between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number , please!\n");
        }
        else if (guess < number)
        {
            printf("higher number , please!\n");
        }
        else
        {
            printf("You guessed  in %d attempts\n" , nguesses);
        }
        nguesses++;
    }

        while (guess != number);
            
        return 0;
    }