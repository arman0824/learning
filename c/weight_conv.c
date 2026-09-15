#include <stdio.h>
#include <stdbool.h>

int main(){

    int num;
    double ptkg = 0.45359237;
    double kgtp = 2.20462262;
    double weight, ans;

    printf("Enter your choice\n1. Pound to kilogram.\n2. Kilogram to pound\n");
    scanf("%d", &num);

    while (true)
    {
        printf("Enter your choice: ");
        scanf("%d", &num);

   
        if (num == 1)
        {
            printf("Enter weight in Pounds: ");
            scanf("%lf", &weight);
            ans = weight * ptkg;
            printf("%.3f", ans);
            break;

        }
        else if (num == 2)
        {
            printf("Enter weight in Kilogram: ");
            scanf("%lf", &weight);
            ans = weight * kgtp;
            printf("%.3f", ans);
            break;
        }
        else{
            printf("Invalid Input enter a choice 1 or 2\n");
        }
    }
    
    

}