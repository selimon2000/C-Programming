#include <stdio.h>

int main()
{
    int secret_number = 5;
    int guess;
    int guess_count = 0;
    int guess_limit = 3;
    int out_of_guesses = 0;

    while (guess != secret_number && out_of_guesses == 0)
    {
        if (guess_count < guess_limit)
        {
            printf("Enter a number:");
            scanf("%d", &guess);
            guess_count++;
        }
        else
        {
            out_of_guesses = 1;
        }
    }
    if (out_of_guesses == 1)
    {
        printf("Haha you lose cos out of guesses");
    }

    else
    {
        printf("You Win!");
    }

}