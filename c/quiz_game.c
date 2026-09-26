#include <stdio.h>
#include <string.h>

int main(){

    char question[][100] = {"1. Question 1",
                            "2. Question 2",
                            "3. Question 3",
                            "4. Question 4"};
    
    char options[][100] = {"A. option 1\nB. option 2\nC. option 3\nD. option 4",
                          "A. option 1\nB. option 2\nC. option 3\nD. option 4",
                          "A. option 1\nB. option 2\nC. option 3\nD. option 4",
                          "A. option 1\nB. option 2\nC. option 3\nD. option 4"};
    
    char answers[]= {'A','B','C','D'}; 

    char input, name[30];
    int pts=0;
    char guess = '\0';
    int score = 0;

    int count = sizeof(question) / sizeof(question[0]);

    printf("Welcome, Enter your name to continue: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("\nGood Morning, %s!\n", name);

    for (int i = 0; i < count; i++)
    {
        printf("\n%s", question[i]);
        printf("\n%s", options[i]);
        printf("\nEnter your answer: ");
        scanf(" %c", &guess);

        if (guess == answers[i])
        {
            printf("CORRECT\n");
            score++;
        }else{
            printf("INCORRECT\n");
        }
        
    }
    printf("\nYour score is %d\n", score);

}