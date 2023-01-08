#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    void guessEasy();
    void guessMedium();
    void guessHard();
   
    printf("\n\n\t\tWELCOME TO GUESS THE NUMBER GAME\n");
    printf("Select the difficulty that you want:\n");

    printf("1. Easy\n2. Medium\n3. Hard\n");
    int mode;
    double time_taken;
    scanf("%d",&mode);

    if(mode==1)
    {
    clock_t t;
    t = clock();
    guessEasy();
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC   ;
    }
    else if(mode==2){
    clock_t t;
    t = clock();
    guessEasy();
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC  ;
    }
    else if(mode==3){
    clock_t t;
    t = clock();
    guessEasy();
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
    }
    else{
        printf("Invalid input! Please rerun the code to try again");
    }
    printf(" and the time you took was %f",time_taken);
}

void guessEasy()
{
    int nguesses=1;
    int number, guess;
    srand((unsigned int)time(NULL));
    number = rand()%100 + 1;
    printf("Guess number between 1 to 100: ");

    while(guess!=number)
    {
        scanf("%d", &guess);
        if(guess>0&&guess<101)
        {
            if (number < guess)
            {
                printf("lower the number please\n ");
            }
            else if (number > guess)
            {
                printf("higher the number please\n");
            }
            else if(number == guess)
            {
                printf("Congrats! You guessed the number %d correctly in %d tries",guess,nguesses);
                return ;
            }
        }
        else
        {
            printf("Please enter a number within the range! Retry with a new number now\n");
            guessEasy();
        }
        nguesses++;
    }
}

void guessMedium()
{
    int nguesses=1;
    int number, guess;
    srand((unsigned int)time(NULL));
    number = rand()%200 + 1;
    printf("Guess number between 1 to 200: ");

    while(guess!=number)
    {
        scanf("%d", &guess);
        if(guess>0&&guess<201)
        {
            if (number < guess)
            {
                printf("lower the number please\n ");
            }
            else if (number > guess)
            {
                printf("higher the number please\n");
            }
            else if(number == guess)
            {
                printf("Congrats! You guessed the number %d correctly in %d tries",guess,nguesses);
                return ;
            }
        }
        else
        {
            printf("Please enter a number within the range! Retry with a new number now\n");
            guessEasy();
        }
        nguesses++;
    }
}

void guessHard()
{
    int nguesses=1;
    int number, guess;
    srand((unsigned int)time(NULL));
    number = rand()%300 + 1;
    printf("Guess number between 1 to 300: ");

    while(guess!=number)
    {
        scanf("%d", &guess);
        if(guess>0&&guess<301)
        {
            if (number < guess)
            {
                printf("lower the number please\n ");
            }
            else if (number > guess)
            {
                printf("higher the number please\n");
            }
            else if(number == guess)
            {
                printf("Congrats! You guessed the number %d correctly in %d tries",guess,nguesses);
                return ;
            }
        }
        else
        {
            printf("Please enter a number within the range! Retry with a new number now\n");
            guessEasy();
        }
        nguesses++;
    }
}