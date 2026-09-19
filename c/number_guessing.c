#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int guess=0, tries=0, min=1, max=100, ans=(rand() % (max-min+1)) + min;
    
    printf("*** GUESS THE NUMBER ***\n");
    printf("Guess the number between 0-100:\n");

    do{
        printf("Guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess > ans)
        {
            printf("TOO HIGH\n");
        }else if (guess < ans)
        {
            printf("TOO LOW\n");
        }
        
    } while (guess != ans);
    
    printf("The number is: %d\n", ans);
    printf("You took %d tries", tries);


}