#include <stdio.h>
#include <string.h>

int main(){

    char names[3][30] = {0};
    int length = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < length; i++)
    {
        printf("Enter name %d: ", i+1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }
    for (int j = 0; j < length; j++)
    {
        printf("%s ", names[j]);
    }
    printf("\n");

}