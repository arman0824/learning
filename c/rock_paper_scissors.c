#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){

    srand(time(NULL));

    int comp = ((rand() % 3) + 1), user;

    printf("***ROCK PAPER SCISSORS***\n1. Rock\n2. Paper\n3. Scissors\nSelect your MOVE(1-3): ");\
    scanf("%d", &user);

    while (user > 3 || user < 1)
    {
        printf("Invalid choice, Select your MOVE(1-3): ");
        scanf("%d", &user);  
    }
    

    while (comp == 1)
    {
        switch (user)
        {
        case 1:
            printf("ITS A TIE\n");
            break;
        case 2:
            printf("USER WINS\n");
            break;
        case 3:
            printf("COMPUTER WINS\n");
            break;
        }
        break;
        
    }
    while (comp == 2)
    {
        switch (user)
        {
        case 1:
            printf("COMPUTER WINS\n");
            break;
        case 2:
            printf("ITS A TIE\n");
            break;
        case 3:
            printf("USER WINS\n");
            break;
        }
        break;
        
    }
    while (comp == 3)
    {
        switch (user)
        {
        case 1:
            printf("USER WINS\n");
            break;
        case 2:
            printf("COMPUTER WINS\n");
            break;
        case 3:
            printf("ITS A TIE\n");
            break;
        }
        break;
    }
    switch (user)
    {
    case 1:
        printf("You picked ROCK\n");
        break;
    case 2:
        printf("You picked PAPER\n");
        break;
    case 3:
        printf("You picked SCISSORS\n");
        break;
    }
    switch (comp)
    {
    case 1:
        printf("COMPUTER picked ROCK\n");
        break;
    case 2:
        printf("COMPUTER picked PAPER\n");
        break;
    case 3:
        printf("COMPUTER picked SCISSORS\n");
        break;
    }
}